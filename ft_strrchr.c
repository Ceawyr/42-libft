/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnamoune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 22:37:07 by cnamoune          #+#    #+#             */
/*   Updated: 2024/10/23 16:27:27 by cnamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	while (i > 0)
	{
		if ((unsigned char)c == s[i - 1])
			return ((char *)&s[i - 1]);
		i--;
	}
	if ((unsigned char)c == s[0])
		return ((char *)&s[0]);
	return (NULL);
}
/*
int	main()
{
	char str[] = "This is a sample string";
	char occ = 'T';
	char *tab = strrchr(str, occ);
	char *dtab = ft_strrchr(str, occ);  
	printf("Standard: %s\n", tab);    // Output: "g"
	printf("Custom: %s\n", dtab);     // Output: "g"
}
*/
