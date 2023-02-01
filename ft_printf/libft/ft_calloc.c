/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:32:28 by lbaroni           #+#    #+#             */
/*   Updated: 2022/10/07 12:47:45 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ar;

	if (size == 0 || nmemb == 0)
		ar = malloc(1);
	else
	{
		ar = malloc(nmemb * size);
		if (nmemb > SIZE_MAX / size || !ar)
			return (NULL);
		ft_memset(ar, 0, nmemb * size);
	}
	return (ar);
}
