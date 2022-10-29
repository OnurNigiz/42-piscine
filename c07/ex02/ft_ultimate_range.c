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

int ft_ulltimate_range(int **range, int min, int max)
{
    int bound;
    int c;
    int *saver;
    int *d;

    if (min >= max)
    {   
        *range = 0;
        return (0);
    }
    bound = max - min;
    d = (saver = malloc(bound * sizeof(int)));
    if (!d)
    {
        *range = 0;
        return (-1);
    }
    *range = bound;
    c = 0;
    while (c < bound)
    {
        saver[c] = min + c;
        c++;
    }
    return (bound);
}