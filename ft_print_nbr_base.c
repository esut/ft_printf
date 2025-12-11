/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr_base.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosiraj- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:05:58 by mosiraj-          #+#    #+#             */
/*   Updated: 2025/11/25 18:08:45 by mosiraj-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_base(char c)
{
	write(1, &c, 1);
}

int	ft_print_nbr_base(unsigned int n)
{
	int		count;
	char	*hex_chars;

	count = 0;
	if (n >= 16)
	{
		count += ft_print_nbr_base(n / 16);
	}
	hex_chars = "0123456789abcdef";
	ft_putchar_base(hex_chars[n % 16]);
	count++;
	return (count);
}
// #include <stdio.h>
// int main (void)
// {
//     int n = ft_print_nbr_base(255);
//     printf(" n = %i\n",n);
// }
