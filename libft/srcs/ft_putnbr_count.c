/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:12:33 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/06 10:49:23 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_put_unsigned_base(unsigned long long n, int base,
	const char *symbols, int *count)
{
	if (n >= (unsigned long long)base)
		ft_put_unsigned_base((n / base), base, symbols, count);
	ft_putchar_count(symbols[n % base], count);
}

void	ft_putnbr_signed(long long n, int *count)
{
	if (n < 0)
	{
		ft_putchar_count('-', count);
		n = -n;
	}
	ft_put_unsigned_base((unsigned long long)n, 10, "0123456789", count);
}

void	ft_putnbr_unsigned(unsigned long long n, int base,
	char format, int *count)
{
	const char	*symbols;

	if (format == 'X')
		symbols = "0123456789ABCDEF";
	else
		symbols = "0123456789abcdef";
	ft_put_unsigned_base(n, base, symbols, count);
}
