/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:07:32 by lbaroni           #+#    #+#             */
/*   Updated: 2022/10/26 18:08:11 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ft(const char a, va_list args, int count)
{
	if (a == 'c')
		count += ft_printchar(va_arg(args, int));
	if (a == 's')
		count += ft_print_str(va_arg(args, char *));
	if (a == 'p')
		count += ft_print_pointer(va_arg(args, unsigned long));
	if (a == 'd' || a == 'i')
		count += ft_print_int(va_arg(args, int));
	if (a == 'u')
		count += ft_print_unsigned_int(va_arg(args, int));
	if (a == 'x')
		count += ft_print_hex1(va_arg(args, int), 'x');
	if (a == 'X')
		count += ft_print_hex1(va_arg(args, int), 'X');
	if (a == '%')
		count += write(1, "%", 1);
	return (count);
}
