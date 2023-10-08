/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 00:29:24 by akovacs-          #+#    #+#             */
/*   Updated: 2023/10/08 01:04:36 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;

	ptr = (char *)malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	ft_strlcpy(ptr, s1, ft_strlen((char *)s1) + 1);
	ft_strlcat(ptr, s2, ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	return (ptr);
}
