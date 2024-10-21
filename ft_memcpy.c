/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnamoune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:32:48 by cnamoune          #+#    #+#             */
/*   Updated: 2024/10/18 16:29:24 by cnamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    if(!dest && !src)
        return NULL;
    unsigned char		*destination;
    const unsigned char *source;
    size_t 				i;

    destination = (unsigned char *)dest;
    source = (const unsigned char *)src;
    i = 0;
    while (i < n)
    {
        destination[i] = source[i];
        i++;
    }
    return (dest);
}
