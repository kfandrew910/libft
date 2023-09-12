/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:58:21 by akovacs-          #+#    #+#             */
/*   Updated: 2023/09/12 12:11:10 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *b, int c, size_t len)
{
	unsigned int	i;
	i = 0;

	while (i < len)
	{
		*(b + i) = c;
		i++;
	}
}
