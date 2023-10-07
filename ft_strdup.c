/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 23:13:34 by akovacs-          #+#    #+#             */
/*   Updated: 2023/10/07 23:32:01 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*ptr;

	size = ft_strlen((char *)s) + 1;
	ptr = (char *)malloc(sizeof(char) * size);
	ft_strlcpy(ptr, s, size);
	return (ptr);
}
