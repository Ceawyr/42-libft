/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:32:58 by root              #+#    #+#             */
/*   Updated: 2024/09/24 16:46:05 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_atoi(const char *nptr)
{
        int nb = 0;
        int i = 0;
        int signe = 1;
        while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
          i++;
        if (nptr[i] == '+' || nptr[i] == '-')
        {
          if (nptr[i] == '-')
            signe = -signe;
          i++;
        }
        while (nptr[i] >= '0' && nptr[i] <= '9')
        {   
          nb = nb * 10 + (nptr[i] - '0');
          i++;
        }
        return (nb * signe);
 }
 #include<stdlib.h>
 #include<stdio.h>
 int main()
 {
         char tab[] = "99199999999999999999";
         int i = atoi(tab);
         printf("%d\n", i);
         int y = ft_atoi(tab);
         printf("%d\n", y);
 }
