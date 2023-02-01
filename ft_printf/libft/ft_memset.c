/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:31:00 by lbaroni           #+#    #+#             */
/*   Updated: 2022/10/04 14:24:49 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t mod)
{
	unsigned char	*dest;
	size_t			i;

	i = 0;
	if (mod == 0)
		return (str);
	dest = str;
	while (i < mod)
	{
		dest[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[4] = "cane";

	puts(ft_memset(str, 'x', 4));
}*/
