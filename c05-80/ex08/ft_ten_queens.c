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
#include <stdio.h>
#include <unistd.h>

void    print(char c)
{
    write(1, &c, 1);
}

int test(int table[10], int x, int y)
{
    int counter;
    
    counter = 0;
    while (counter < x )
    {
        if (y == table[counter] || counter + table[counter] == x+y
            || counter + table[counter] == x-y )
            return (0);
        return (1);
        counter++;
    }
}

int recursive_test(int table[10], int *res, int pos)
{
    int c1;
    int c2;
    
    if (pos == 10)
    {
        *res += 1;
        c1 = 0;
        while (c1 < 10)
        {
            print(table[c1] + '0');
            c1 += 1;
        }
        print('\n');
    }
    else
    {
        c2 = 0;
        while (c2 < 10)
        {
            if (test(table, pos, c1))
            {
                table[pos] = c1;
                recursive_test(table, res, pos + 1);
            }
        }
    }
}

int ft_ten_queens_puzzle(void)
{
    int table[10];
    int counter;
    int result;
    
    counter = 0;
    while (counter < 10)
        table[counter] = -1;
    
    result = 0;
    recursive_test(table, &result, 0);
    return (result);
}

int main(void) 
{
    int c;
    
    c = ft_ten_queens_puzzle();
    printf("%d\n", c);
}