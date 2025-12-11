/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosiraj- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 17:27:15 by mosiraj-          #+#    #+#             */
/*   Updated: 2025/11/25 17:29:47 by mosiraj-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	char	c;
	long	i;
	int		count;

	count = 0;
	i = n;
	if (i == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (i < 0)
	{
		write(1, "-", 1);
		i = -i;
		count++;
	}
	if (i >= 10)
	{
		count += ft_print_nbr(i / 10);
	}
	c = (i % 10) + '0';
	write(1, &c, 1);
	count++;
	return (count);
}
// #include <stdio.h>
// int main(void)
// {
//     int n = ft_print_nbr(123456789);
//     printf("\n");
//     printf("%i\n",n);
// }
