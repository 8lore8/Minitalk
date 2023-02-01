/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:15:10 by lbaroni           #+#    #+#             */
/*   Updated: 2022/10/19 15:28:59 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*fun;

	if (!lst)
		return (0);
	i = 1;
	fun = lst;
	while (fun->next != NULL)
	{
		fun = fun->next;
		i++;
	}
	return (i);
}
