/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnamoune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:03:55 by cnamoune          #+#    #+#             */
/*   Updated: 2024/10/25 16:33:43 by cnamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	y;

	if (!s1 || !set)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (i <= j && ft_strchr(set, s1[j]))
		j--;
	y = j - i + 1;
	str = malloc(y + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[i], y + 1);
	return (str);
}
/*
int	main()
{
	char tab[] = "salut casalutva salut";
	char set[] = "salut";
	char *result = ft_strtrim(tab, set);
	printf("%s", result);
	free (result);
}*/
