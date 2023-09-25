/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:57:07 by akovacs-          #+#    #+#             */
/*   Updated: 2023/09/24 15:54:50 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	if (dest == src || !n)
		return (dest);
	while (n)
	{
		n--;
		*((unsigned char *)dest + n) = *((unsigned char *) src + n);
	}
	return (dest);
}
