/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:52:19 by lbaroni           #+#    #+#             */
/*   Updated: 2022/10/05 17:23:25 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (s[i] != (unsigned char)c && i != 0)
		i--;
	if (s[i] != (unsigned char)c)
		return (NULL);
	return ((char *)&s[i]);
}

/*int	main(void)
{
	char	d[21] = "ciao pippo come stai";

	printf("%s\n", ft_strrchr(d, 's'));
}*/
