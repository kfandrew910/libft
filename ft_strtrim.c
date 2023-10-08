/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 01:27:16 by akovacs-          #+#    #+#             */
/*   Updated: 2023/10/08 02:53:07 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_buffer(char c, const char *buffer)
{
	size_t	i;

	i = 0;
	while (buffer[i])
		if (buffer[i++] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = NULL;
	while (in_buffer(s1[i], set) && s1[i])
		i++;
	if (s1[i])
		ptr = ft_strdup(s1 + i);
	if (!ptr)
	{
		ptr = (char *)malloc(1);
		ptr[0] = 0;
		return (ptr);
	}
	i = ft_strlen(ptr);
	i--;
	while (i > 0 && in_buffer(ptr[i], set))
		i--;
	ptr = ft_substr(ptr, 0, i + 1);
	return (ptr);
}
