/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosiraj- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:39:41 by mosiraj-          #+#    #+#             */
/*   Updated: 2025/11/25 17:08:26 by mosiraj-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_if(char format, va_list args)
{
	if (format == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (format == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (format == 'i' || format == 'd')
		return (ft_print_nbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_print_nbr_u(va_arg(args, unsigned int)));
	else if (format == 'p')
		return (ft_print_p(va_arg(args, void *)));
	else if (format == 'x')
		return (ft_print_nbr_base(va_arg(args, unsigned int)));
	else if (format == 'X')
		return (ft_print_nbr_base_u(va_arg(args, unsigned int)));
	else if (format == '%')
		return (ft_print_char('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_if(format[i], args);
		}
		else
			count += ft_print_char(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
