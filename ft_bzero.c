/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnamoune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:13:52 by cnamoune          #+#    #+#             */
/*   Updated: 2024/10/16 16:35:31 by cnamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	unsigned char *str;
	size_t i;

	str = (unsigned char *)s;
	i = 0;
	if (i == n)
		return;
	while(i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/*
int	main()
{
	char str[15];
	ft_bzero(str, 10);
}*/
