/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnamoune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:44:25 by cnamoune          #+#    #+#             */
/*   Updated: 2024/10/20 21:11:04 by cnamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	if (n == 0)
		return (NULL);
	i = 0;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
int    main()
{
    char tab[] = "This is a sample string";
    char *occ = memchr (tab, 'h', 2);
    printf("%s\n", occ);
    char dtab[] = "This is a sample string";
    char *occc = ft_memchr (dtab, 'h', 2);
    printf("%s", occc);
}*/
