/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:02:19 by akovacs-          #+#    #+#             */
/*   Updated: 2023/09/24 18:11:26 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	ptr = NULL;
	i = 0;
	if (c >= 256)
		c = c % 256;
	while (s[i] != 0)
	{
		if (s[i] == c)
			ptr = (char *)(s + i);
		i++;
	}
	if (c == 0)
		return ((char *)s + i);
	if (ptr != 0)
		return (ptr);
	return (0);
}
