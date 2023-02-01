/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:32:17 by lbaroni           #+#    #+#             */
/*   Updated: 2022/10/07 15:37:17 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*st1;
	unsigned const char	*st2;
	size_t				i;

	st1 = s1;
	st2 = s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && st1[i] == st2[i])
		i++;
	return (st1[i] - st2[i]);
}

/*int	main(void)
{
	size_t len = 3;
	unsigned const char	str[] = "peppe";
	unsigned const char	str2[] = "iuta";

	printf("%d\n", ft_memcmp(str, str2, len));
	printf("%d", memcmp(str, str2, len));
}*/
