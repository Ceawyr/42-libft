/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnamoune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:28:43 by cnamoune          #+#    #+#             */
/*   Updated: 2024/10/25 22:46:48 by cnamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*result;
	size_t	i;

	nb = n;
	i = 0;
	result = malloc(int_len(nb) + 1);
	if (!result)
		return (NULL);
	i = int_len(n);
	result[i--] = '\0';
	if (nb == 0)
		result[0] = '0';
	if (nb < 0)
	{
		nb = -nb;
		result[0] = '-';
	}
	while (nb > 0)
	{
		result[i] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
	return (result);
}
/*
int	main()
{
	int test = -2147483648;
	char *dest = ft_itoa(test);
	printf("%s", dest);
}*/
