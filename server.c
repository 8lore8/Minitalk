/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:16:59 by lbaroni           #+#    #+#             */
/*   Updated: 2023/02/01 13:17:02 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sigusr1(int signo, siginfo_t *si, void *data)
{
	static int	c;
	static int	bit;

	(void)data;
	if (bit < 7)
	{
		c += (signo == SIGUSR1) << bit;
		bit++;
	}
	else
	{
		c += (signo == SIGUSR1) << bit;
		if (c)
			write(1, &c, 1);
		else
		{
			kill(si->si_pid, SIGUSR1);
			ft_printf("\n");
		}
		c = 0;
		bit = 0;
	}
}

int	main(int ac, char **av)
{
	struct sigaction	sa;

	(void)av;
	if (ac != 1)
	{
		ft_printf("Error: wrong format.\n");
		ft_printf("Try: ./server\n");
		return (0);
	}
	ft_memset(&sa, 0, sizeof(sa));
	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = sigusr1;
	ft_printf("PID:\t%d\n", (int)getpid());
	while (1)
	{
		sigaction(SIGUSR1, &sa, 0);
		sigaction(SIGUSR2, &sa, 0);
	}
}
