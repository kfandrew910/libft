/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 23:54:46 by akovacs-          #+#    #+#             */
/*   Updated: 2023/10/08 03:59:18 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*final;
	int		i;

	i = 0;
	ptr = NULL;
	if (!s)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	if (start > (unsigned int)ft_strlen((char *)s))
		return (ft_strdup(""));
	while (len-- && s[i])
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = 0;
	final = ft_strdup(ptr);
	return (final);
}
