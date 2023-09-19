/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 14:57:07 by akovacs-          #+#    #+#             */
/*   Updated: 2023/09/19 12:07:28 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == src || !n)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	while (n)
	{
		(unsigned char *) dest = (unsigned char *) src;
		n--;
	}
	return (dest);
}
