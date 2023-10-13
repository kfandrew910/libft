/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 23:02:08 by akovacs-          #+#    #+#             */
/*   Updated: 2023/10/13 18:22:51 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*small_int(void)
{
	char	*ptr;

	ptr = ft_itoa(-2147483647);
	ptr[10] = '8';
	return (ptr);
}

void	pass_numbers(char *ptr, int n, size_t len, size_t neg)
{
	ptr[--len] = 0;
	while (len > neg)
	{
		ptr[--len] = n % 10 + 48;
		n /= 10;
	}
	if (neg)
		ptr[0] = '-';
}

size_t	count_digits(int n)
{
	size_t	len;

	len = 0;
	while (n >= 0)
	{
		if (n == 0)
			n = -1;
		else
			n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	len;
	size_t	neg;

	len = 0;
	neg = 0;
	if (n < 0)
	{
		len++;
		neg = 1;
		n *= -1;
	}
	len += count_digits(n);
	if (n == 0)
		len = 2;
	if (len == 1)
		return (small_int());
	ptr = (char *)malloc(sizeof(char) * len);
	if (!ptr)
		return (NULL);
	pass_numbers(ptr, n, len, neg);
	return (ptr);
}
