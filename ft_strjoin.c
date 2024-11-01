/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnamoune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:12:22 by cnamoune          #+#    #+#             */
/*   Updated: 2024/10/24 20:34:34 by cnamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	y;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	result = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	y = 0;
	while (s2[y])
	{
		result[i] = s2[y];
		i++;
		y++;
	}
	result[i] = '\0';
	return (result);
}
/*
int	main()
{
	char tab[] = "Concatene moi cette chaine dans ";
	char dtab[] = "cette chine";
	char *result = ft_strjoin(tab, dtab);
	printf("%s", result);
	free(result);
}*/
