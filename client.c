/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:16:53 by lbaroni           #+#    #+#             */
/*   Updated: 2023/02/01 13:16:55 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_send_bit(unsigned int c, int pid, int bit)
{
	int	i;

	i = 0;
	while (i < bit)
	{
		if (c % 2 == 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		c /= 2;
		i++;
		usleep(42);
	}
}

void	ft_sig_ok(int sig)
{
	(void)sig;
	ft_printf("Messaggio ricevuto!\n");
	exit(0);
}

int	main(int ac, char **av)
{
	int	i;
	int	pids;

	if (ac != 3)
	{
		ft_printf("Error: wrong format.\n");
		ft_printf("Try: ./client <PID> <MESSAGE>\n");
		return (0);
	}
	signal(SIGUSR1, ft_sig_ok);
	pids = ft_atoi(av[1]);
	i = 0;
	while (av[2][i])
	{
		ft_send_bit(av[2][i], pids, sizeof(av[2][i]) * 8);
		i++;
	}
	ft_send_bit(0, pids, sizeof(char) * 8);
	pause();
}
