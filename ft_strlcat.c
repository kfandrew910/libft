/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:50:33 by akovacs-          #+#    #+#             */
/*   Updated: 2023/09/24 14:33:37 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	d_size;
	size_t	s_size;
	size_t	i;
	size_t	j;

	d_size = ft_strlen(dst);
	s_size = ft_strlen((char *)src);
	i = d_size;
	j = 0;
	if (size <= d_size)
	{
		return (size + s_size);
	}
	while (src[j] && i + 1 < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (d_size + s_size);
}
