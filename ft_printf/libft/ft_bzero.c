/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:17:08 by lbaroni           #+#    #+#             */
/*   Updated: 2022/10/04 14:15:11 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *str, size_t mod)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = str;
	while (i < mod)
	{
		dest[i] = 0;
		i++;
	}
	return ;
}

/*int	main(void)
{
	int	i;
	char	str[10] = "cammello";
	
	i = 0;
	ft_bzero(str, 1);
	while (i++ != 9)
	printf("%c", str[i]);
}*/
