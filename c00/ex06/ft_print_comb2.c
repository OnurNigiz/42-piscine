/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 05:02:03 by onigiz            #+#    #+#             */
/*   Updated: 2022/10/16 05:02:07 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char a, char b)
{
	write (1, &a, 1);
	write (1, &b, 1);
}

void	ft_convert_int(int n, int max)
{
	char	char_f;
	char	char_s;

	if (n <= 9)
	{
		char_f = n + 48;
		ft_put_char('0', char_f);
	}
	else if (n <= max)
	{
		char_f = (n / 10) + 48;
		char_s = (n % 10) + 48;
		ft_put_char(char_f, char_s);
	}
}

void	ft_concat(int first, int second)
{
	ft_convert_int(first, 98);
	write (1, " ", 1);
	ft_convert_int(second, 99);
	if (first != 98 || second != 99)
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	first_comb;
	int	second_comb;

	first_comb = 0;
	while (first_comb <= 98)
	{
		second_comb = first_comb + 1;
		while (second_comb <= 99)
		{
			ft_concat(first_comb, second_comb);
			second_comb++;
		}
		first_comb++;
	}
}
