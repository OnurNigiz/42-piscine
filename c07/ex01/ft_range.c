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

int *ft_range(int min, int max)
{
    int range;
    int counter;
    int *saver;
    int *d;

    if (min >= max)
        return (0);
    range = max - min;
    d = (saver = (int *)malloc(range * sizeof(int)));
    if (!d)
        return (0);
    counter = 0;
    while (counter < range)
        {
            saver[counter] = min + counter;
            counter++;
        }
    return (saver);
}