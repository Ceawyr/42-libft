/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnamoune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 21:03:23 by cnamoune          #+#    #+#             */
/*   Updated: 2024/10/21 17:12:58 by cnamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t i;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	int tab[] = {1,2,3,4,4};
	int dtab[] = {1,2,3,4,5};
	int i = ft_memcmp(tab, dtab, sizeof(int) * 5);
	printf("%d\n", i);
	int z = memcmp(tab, dtab, sizeof(int) * 5);
	printf("%d", z);
}
*/