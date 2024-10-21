/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnamoune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:06:31 by cnamoune          #+#    #+#             */
/*   Updated: 2024/10/18 18:26:51 by cnamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t y;

	y = 0;
	i = ft_strlen(src);
	if (size == 0)
		return (i);
	while (y < size - 1 && src[y] != '\0')
	{
		dst[y] = src[y];
		y++;
	}
	dst[y] = '\0';
	return (i);
}
