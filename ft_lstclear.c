/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 02:00:34 by akovacs-          #+#    #+#             */
/*   Updated: 2023/10/22 18:52:14 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*actual;

	actual = *lst;
	while (actual)
	{
		tmp = actual->content;
		del(tmp->content);
		free(actual);
		actual = tmp->next;
	}
	*lst = NULL;
}
