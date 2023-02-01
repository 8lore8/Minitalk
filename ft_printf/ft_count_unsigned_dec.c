/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_unsigned_dec.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:22:51 by lbaroni           #+#    #+#             */
/*   Updated: 2022/10/27 16:23:24 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_unsigned_dec(unsigned int n)
{
	int					i;
	unsigned long int	g;

	g = n;
	if (g == 0)
		return (1);
	i = 0;
	while (g > 0)
	{
		i++;
		g = g / 10;
	}
	return (i);
}
