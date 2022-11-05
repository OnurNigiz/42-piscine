/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onigiz <onigiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 02:08:26 by onigiz            #+#    #+#             */
/*   Updated: 2022/10/23 02:08:27 by onigiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

char	ft_hexadecimal(unsigned char hex)
{
	ft_putchar("0123456789abcdef"[hex / 16]);
	ft_putchar("0123456789abcdef"[hex % 16]);
	return (hex);
}

void	ft_putstr_non_printable(char *str)
{
	int	b;

	b = 0;
	while (str[b] != '\0')
	{
		if (!(str[b] < 32 || str[b] == 127))
			ft_putchar(str[b]);
		else if (str[b] < 32 || str[b] == 127)
		{
			write(1, "\\", 1);
			ft_hexadecimal(str[b]);
		}
		b++;
	}
}
