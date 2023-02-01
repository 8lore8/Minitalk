/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:44:38 by lbaroni           #+#    #+#             */
/*   Updated: 2022/10/20 11:57:32 by lbaroni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	new = NULL;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst-> content));
		if (!temp)
		{
			while (new)
			{
				temp = new->next;
				(*del)(new->content);
				new = temp;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&new, temp);
		lst = lst-> next;
	}
	return (new);
}
