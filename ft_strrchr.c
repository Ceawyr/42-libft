/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnamoune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 22:37:07 by cnamoune          #+#    #+#             */
/*   Updated: 2024/10/21 17:13:57 by cnamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;

	i = ft_strlen(s);
	if(!c && !*s)
		return (NULL);
	else if (c == '\0')
		return((char *)&s[i]);
	while (i > 0)
	{
		if ((unsigned char)c == s[i - 1])
			return((char *)&s[i - 1]);
		i--;
	}
	return (NULL);
}
/*
int	main()
{
	char str[] = "This is a sample string";
	char occ = 'h';
	char *tab = strrchr(str, occ);  // fonction standard
	char *dtab = ft_strrchr(str, occ);  // ta version
	printf("Standard: %s\n", tab);    // Output: "g"
	printf("Custom: %s\n", dtab);     // Output: "g"
}
*/
