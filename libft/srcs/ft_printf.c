/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 11:39:52 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/24 12:35:14 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>

static void	ft_parse(char format, va_list *par_list, int *count)
{
	if (format == 'c')
		ft_putchar_count((char)va_arg(*par_list, int), count);
	else if (format == 's')
		ft_putstr_count(va_arg(*par_list, char *), count);
	else if (format == '%')
		ft_putchar_count('%', count);
	else if (format == 'd' || format == 'i')
		ft_putnbr_signed((va_arg(*par_list, int)), count);
	else if (format == 'u')
		ft_putnbr_unsigned((va_arg(*par_list, unsigned int)), 10,
			format, count);
	else if (format == 'x' || format == 'X')
		ft_putnbr_unsigned(va_arg(*par_list, unsigned int), 16,
			format, count);
	else if (format == 'p')
		ft_putpointer(va_arg(*par_list, void *), count);
}

__attribute__((format (printf, 1, 2))) int	ft_printf(const char *format, ...)
{
	size_t	i;
	int		count;
	va_list	par_list;

	i = 0;
	count = 0;
	va_start(par_list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			ft_parse(format[i], &par_list, &count);
		}
		else
			ft_putchar_count(format[i], &count);
		i++;
	}
	va_end(par_list);
	return (count);
}
