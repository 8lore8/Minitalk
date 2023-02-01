/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:41:49 by lbaroni           #+#    #+#             */
/*   Updated: 2022/10/18 17:59:52 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countwords(char const *s, char c)
{
	int	count;
	int	i;
	int	a;

	count = 0;
	i = 0;
	a = 0;
	while (s[i])
	{
		if (s[i] != c && a == 0)
		{
			count++;
			a = 1;
		}
		else if (s[i] == c)
			a = 0;
		i++;
	}
	return (count);
}

char	*ft_create_string(char const *s, char c, int start)
{
	char	*newstring;
	int		i;
	int		startcpy;

	i = 0;
	startcpy = start;
	while (s[start] != c && s[start] != '\0')
	{
		i++;
		start++;
	}
	newstring = malloc (sizeof(char) * i + 1);
	i = 0;
	if (!newstring)
		return (NULL);
	while (s[startcpy] != c && s[startcpy] != '\0')
	{
		newstring[i] = s[startcpy];
		i++;
		startcpy++;
	}
	newstring[i] = '\0';
	return (newstring);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		a;

	split = (char **)malloc(sizeof(char *) * (countwords(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	a = 0;
	while (s[i])
	{
		if (s[i] != c && a == 0)
		{
			split[j] = ft_create_string(s, c, i);
			j++;
			a = 1;
		}
		if (s[i] == c)
			a = 0;
		i++;
	}
	split[j] = NULL;
	return (split);
}
