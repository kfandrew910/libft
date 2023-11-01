/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 21:37:30 by akovacs-          #+#    #+#             */
/*   Updated: 2023/10/29 22:01:12 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*actual;

	if (!lst)
		return (0);
	actual = ft_lstnew(f(lst->content));
	start = actual;
	while (lst->next)
	{
		lst = lst->next;
		actual->next = ft_lstnew(f(lst->content));
		if (!(actual->next))
		{
			del(actual->next);
			free(actual->next);
			return (NULL);
		}
		actual = actual->next;
	}
	return (start);
}
