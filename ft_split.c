/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:21:02 by akovacs-          #+#    #+#             */
/*   Updated: 2023/10/12 20:12:50 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_chars(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

size_t	count_words(char *s, char c)
{
	size_t	i;
	size_t	amount;

	i = 0;
	amount = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			amount++;
		i++;
	}
	if (s[i - 1] && s[i - 1] != c)
		amount++;
	if (s[0] && s[0] != c)
		amount++;
	return (amount);
}

size_t	free_ptr(char **ptr, size_t len, char *str)
{
	size_t	i;

	i = 0;
	if (str == 0)
	{
		while (i < len)
			free(ptr[i++]);
		return (1);
	}
	return (0);
}

size_t	needs_free(char	**ptr, char *s, char c, size_t length)
{
	size_t	size;
	size_t	i;

	i = 0;
	if (ptr)
	{
		while (i < length - 1)
		{
			size = 0;
			while (size == 0)
				size = count_chars(s++, c);
			ptr[i] = (char *)malloc(sizeof(char) * size + 1);
			if (free_ptr(ptr, i, ptr[i]) != 0)
				return (1);
			ft_strlcpy(ptr[i], s - 1, size + 1);
			s = s + size;
			i++;
		}
		ptr[i] = NULL;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	words;

	s = ft_strtrim(s, &c);
	if (!s || s[0] == 0)
	{
		ptr = (char **)ft_calloc(1, sizeof(char *));
		if (!ptr)
			ptr = NULL;
		return (ptr);
	}
	words = count_words((char *)s, c);
	ptr = (char **)ft_calloc(words, sizeof(char *));
	if (!ptr || needs_free(ptr, (char *)s, c, words) == 1)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
