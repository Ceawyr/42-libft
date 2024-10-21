/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnamoune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 21:57:55 by cnamoune          #+#    #+#             */
/*   Updated: 2024/10/19 22:34:03 by cnamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t i;

	i = 0;
	if (!c && !*s)
		return (NULL);
	while (s[i])
	{
		if ((unsigned char)c == s[i])
			return((char *)&s[i]);
		i++;
	}
	return (NULL);
}
