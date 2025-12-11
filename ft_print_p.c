/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosiraj- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:15:59 by mosiraj-          #+#    #+#             */
/*   Updated: 2025/11/25 17:22:03 by mosiraj-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_p(char c)
{
	write(1, &c, 1);
}

int	ft_print_nbr_base_p(unsigned long long n)
{
	int		count;
	char	*hex_char;

	count = 0;
	if (n == 0)
	{
		ft_putchar_p('0');
		return (1);
	}
	if (n >= 16)
	{
		count += ft_print_nbr_base_p(n / 16);
	}
	hex_char = "0123456789abcdef";
	ft_putchar_p(hex_char[n % 16]);
	count++;
	return (count);
}

int	ft_print_p(void *ptr)
{
	int	count;

	count = 0;
	if (ptr == NULL)
	{
		count += write(1, "(nil)", 5);
		return (count);
	}
	write(1, "0x", 2);
	count += 2;
	count += ft_print_nbr_base_p((unsigned long long)ptr);
	return (count);
}
