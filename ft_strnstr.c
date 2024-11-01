/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnamoune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:39:33 by cnamoune          #+#    #+#             */
/*   Updated: 2024/10/31 01:45:16 by cnamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	l = len;
	if ((!big && l <= 0) || (!little && l <= 0))
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < l)
	{
		j = 0;
		if (big[i] == little[0])
		{
			while (little[j] != '\0' && big[i + j] == little[j] && (i + j) < l)
				j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
