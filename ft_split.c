/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnamoune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:18:20 by cnamoune          #+#    #+#             */
/*   Updated: 2024/10/24 23:05:01 by cnamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *s, char c)
{
	int		i;
	size_t	count;

	count = 0;
	while (*s)
	{
		i = 0;
		while (*s && c == *s)
			s++;
		while (*s && *s != c)
		{
			if (!i)
			{
				i = 1;
				count++;
			}
			s++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char		**tab;
	size_t		i;
	size_t		len;
	int			j;
	
	len = 0;
	tab = malloc(count_word(s, c) + 1 * sizeof(char *));
	while (*s)
	{
		while (*s == c)
			s++;
		while (*s != c)
		{
			len++;
			s++;
		}
	}

}

int	main()
{
	char tab[] = "Salut, comment cava, ?";
	char split = ',';
	int i = count_word(tab, split);
	printf("%d", i);
	char **result = ft_split(tab, split);
	*size_t i = 0;

	while (result[i])
	{
		printf("Word %zu : %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
}
