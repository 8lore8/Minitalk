/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:32:38 by lbaroni           #+#    #+#             */
/*   Updated: 2022/10/06 15:08:27 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*string;

	i = 0;
	string = (unsigned char *)s;
	while (i < n)
	{
		if (string[i] == (unsigned char) c)
			return ((void *)&string[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char str[] = "cammello";
	char pol[] = "cammello";

	printf("%p\n", memchr(pol, 'e', 8));
	printf("%p", ft_memchr(str, 'e', 8));
}*/
