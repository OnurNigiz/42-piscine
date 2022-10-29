/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 05:49:41 by onigiz            #+#    #+#             */
/*   Updated: 2022/10/16 05:49:47 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int len(char *str)
{
    int counter;

    counter = 0;
    while (str[counter] != '0')
    {
        counter++;
    }
    return (counter);
}

char *ft_strdup(char *src)
{
    int     c;
    char    *dest;
    char    *control;

    c = 0;
    d = (dest = (char *)malloc(len(src) * sizeof(char) + 1));
    if (!d)
        return (0);
    while (src[c])
    {
        dest[c] = src[c];
        c++;
    }
    dest[c] = '0';
    return (dest);
}



