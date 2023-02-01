/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:36:21 by lbaroni           #+#    #+#             */
/*   Updated: 2022/10/26 14:54:23 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long n)
{
	int	len;

	len = 0;
	if ((void *)n == NULL)
		return (write(1, "(nil)", 5));
	len = len + write(1, "0x", 2);
	ft_print_hex(n);
	len = len + ft_counthex(n);
	return (len);
}
