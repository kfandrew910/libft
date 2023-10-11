/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:21:02 by akovacs-          #+#    #+#             */
/*   Updated: 2023/10/08 23:58:57 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*count_chars(char *s, char c, size_t *final_size)
{
	size_t i;

	i = 0;
	while(s[i] && s[i] != c)
		i++;
	*final_size = i;
	return (s + i);	
}
size_t	count_words(char *s, char c)
{
	size_t	i;
	size_t amount;

	i = 0;
	amount = 0;
	while (s[i])
	{
		if(s[i] == c && s[i - 1] != c)
			amount++;
		i++;
	}
	return (amount);
}

size_t	needs_free(char	**ptr, char *s, char c, size_t length)
{
	size_t	size;
	size_t	i;
	size_t	flag;
	size_t	tmp;

	flag = 0;
	i = 0;
	if(ptr)
	{
		while (i < length && flag == 0)
		{
			size = 0;
			s = count_chars(s, c, &size);
			ptr[i] = (char *)malloc(sizeof(char) * size);
			if(!ptr[i])
			{
				flag = 1;
				tmp = i;
			}
			i++;
		}
		if(flag == 0)
			ptr[i] = 0;
		i = 0;
		while (flag == 1 && i < tmp)
			free(ptr[i++]);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	words;

	words = count_words((char *)s, c);
	printf("\n\n||amount of words:%lu||\n", words);
	ptr = (char **)malloc(sizeof(char *) * words);
	if (!ptr || needs_free(ptr,(char *)s, c, words) == 1)
	{
		free(ptr);
		return (NULL);
	}
	while (*ptr)
	printf("\n\na%sa\n", *(ptr++));
	return (ptr - words + 1);
}
