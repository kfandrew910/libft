/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovacs- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:26:01 by akovacs-          #+#    #+#             */
/*   Updated: 2023/10/21 15:53:57 by akovacs-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_spacer(char c)
{
	if (c >= 9 && c <= 13)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	nbr;
	int	i;

	i = 0;
	sign = 1;
	nbr = 0;
	while (is_spacer(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] <= '9' && nptr[i] >= '0')
	{
		nbr *= 10;
		nbr += nptr[i] - 48;
		i++;
	}
	return (nbr * sign);
}
