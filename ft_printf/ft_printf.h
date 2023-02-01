/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:54:16 by lbaroni           #+#    #+#             */
/*   Updated: 2022/10/12 16:54:23 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_countdec(int n);
int		ft_counthex(unsigned long n);
int		ft_printchar(char c);
void	ft_print_hex(unsigned long n);
int		ft_print_hex1(unsigned int n, char baseform);
int		ft_print_int(int n);
int		ft_print_pointer(unsigned long n);
int		ft_print_str(char *s);
int		ft_print_unsigned_int(int n);
int		ft_printf(const char *str, ...);
int		ft_ft(const char a, va_list args, int count);
void	ft_put_unsigned_nbr_fd(unsigned int n, int fd);
int		ft_count_unsigned_dec(unsigned int n);

#endif
