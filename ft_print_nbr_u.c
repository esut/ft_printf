/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosiraj- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:31:24 by mosiraj-          #+#    #+#             */
/*   Updated: 2025/11/25 17:56:59 by mosiraj-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr_u(unsigned int n)
{
	char		c;
	int			count;

	count = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (n >= 10)
	{
		count += ft_print_nbr_u(n / 10);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
	count++;
	return (count);
}
