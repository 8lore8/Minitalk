/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:20:51 by lbaroni           #+#    #+#             */
/*   Updated: 2022/10/26 12:53:53 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex1(unsigned int n, char baseform)
{
	char			*base;
	unsigned long	j;

	j = n;
	if (baseform == 'x')
		base = "0123456789abcdef";
	else if (baseform == 'X')
		base = "0123456789ABCDEF";
	else
		return (0);
	if (j == 0)
		return (write (1, "0", 1));
	if (n >= 16)
		ft_print_hex1(j / 16, baseform);
	write (1, &base[(int)(j % 16)], 1);
	return (ft_counthex(n));
}
