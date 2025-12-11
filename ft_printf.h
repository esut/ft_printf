/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosiraj- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:14:37 by mosiraj-          #+#    #+#             */
/*   Updated: 2025/11/25 18:21:53 by mosiraj-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_print_char(int c);
int	ft_print_str(char *s);
int	ft_print_nbr(int n);
int	ft_print_nbr_u(unsigned int n);
int	ft_print_p(void *ptr);
int	ft_print_nbr_base(unsigned int n);
int	ft_print_nbr_base_u(unsigned int n);

#endif