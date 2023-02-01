/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:13:10 by lbaroni           #+#    #+#             */
/*   Updated: 2022/10/17 13:53:51 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include <string.h>

static int	ft_controllaset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		a;
	int		i;
	int		f;
	char	*s2;

	a = 0;
	i = 0;
	f = ft_strlen(s1);
	if (s1 == 0 || set == 0)
		return (0);
	while (s1[i] && ft_controllaset(s1[i], set))
		i++;
	while (f > i && ft_controllaset(s1[f - 1], set))
		f--;
	s2 = (char *)malloc(sizeof(char) * f - i + 1);
	while (i < f)
	{
		s2[a] = s1[i];
		a++;
		i++;
	}
	s2[a] = '\0';
	return (s2);
}

/*int	main()
{
	const char *a = "ciao";
	printf("%s\n", ft_strtrim("ciaomcljsakjk ca", a));
}*/
