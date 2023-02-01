/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr_fd.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:19:14 by lbaroni           #+#    #+#             */
/*   Updated: 2022/10/27 16:20:53 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_put_unsigned_nbr_fd(unsigned int n, int fd)
{
	unsigned long int		i;

	i = n;
	if (i > 9)
		ft_put_unsigned_nbr_fd(i / 10, fd);
	ft_putchar_fd(i % 10 + 48, fd);
}
