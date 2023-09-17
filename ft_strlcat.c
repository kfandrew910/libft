/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:50:33 by akovacs-          #+#    #+#             */
/*   Updated: 2023/09/17 14:09:04 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t d_size;
	size_t s_size;
	size_t space_left;
	size_t i;

	i = 0;
	d_size = 0;
	s_size = 0;
	while (dst[d_size] != 0)
		d_size++;
	while (src[s_size] != 0)
		s_size++;
	space_left = (dstsize > d_size)? dstsize - d_size - 1 : 0;
	if (dstsize > 0)
	{
		while (dst[i] != 0 && src[i])
		{
			dst[i + d_size] = src[i];
		}
		dst[i + d_size] = 0;
	}
	return (i);
}
