/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnamoune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:30:08 by cnamoune          #+#    #+#             */
/*   Updated: 2024/10/19 22:38:50 by cnamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t y;
	int c;

	c = 0;
//	i = ft_strlen(src);
//	y = ft_strlen(dst);
	if (y == size)
		return(i + y);
	while (size < i)
	{
		dst[y] = src[c];
		size--;
		c++;
	}
	return (i + y);
}

int	main()
{
	char tab[] = "ca va bien ?";
	char dtab[50] = "Bonjour, ";
	ft_strlcat(dtab, tab, sizeof(tab));
	printf("%s", dtab);
}
