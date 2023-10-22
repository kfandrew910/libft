/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 23:24:31 by akovacs-          #+#    #+#             */
/*   Updated: 2023/10/22 01:46:01 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;
	size_t	pos;

	if (!new)
		return ;
	if (*lst)
	{
		pos = 0;
		tmp = *lst;
		while (tmp->next)
		{
			tmp = tmp->next;
			pos++;
		}
		tmp->next = new;
	}
	else
		*lst = new;
}
