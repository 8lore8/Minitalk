/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:41:26 by lbaroni           #+#    #+#             */
/*   Updated: 2022/10/07 12:23:08 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	conversione(const char *nptr)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (((char *)nptr)[i] != '\0')
	{
		if (((char *)nptr)[i] >= '0' && ((char *)nptr)[i] <= '9')
			j = j * 10 + (((char *)nptr)[i] - '0');
		else
			return (j);
		i++;
	}
	return (j);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	j;
	int	s;

	i = 0;
	j = 0;
	s = 1;
	while ((((char *)nptr)[i] >= '\t' && ((char *)nptr)[i] <= '\r')
			|| ((char *)nptr)[i] == 32)
		i++;
	if (((char *)nptr)[i] == '-')
	{
		s = -1;
		i++;
	}
	else if (((char *)nptr)[i] == '+')
		i++;
	j = conversione(&((char *)nptr)[i]);
	return (j * s);
}

/*int	main(void)
{
	char	str[] = "1024";

	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
}*/
