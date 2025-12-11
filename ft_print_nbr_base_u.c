/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr_BASE.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosiraj- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:09:04 by mosiraj-          #+#    #+#             */
/*   Updated: 2025/11/25 18:12:45 by mosiraj-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_base_u(char c)
{
	write(1, &c, 1);
}

int	ft_print_nbr_base_u(unsigned int n)
{
	int		count;
	char	*hex_chars;

	count = 0;
	if (n >= 16)
	{
		count += ft_print_nbr_base_u(n / 16);
	}
	hex_chars = "0123456789ABCDEF";
	ft_putchar_base_u(hex_chars[n % 16]);
	count++;
	return (count);
}
