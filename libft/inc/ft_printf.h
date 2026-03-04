/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 11:39:55 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/24 12:34:14 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

int		ft_printf(const char *format, ...);
void	ft_putstr_count(char *s, int *count);
void	ft_putchar_count(char c, int *count);
void	ft_putnbr_signed(long long n, int *count);
void	ft_putnbr_unsigned(unsigned long long n, int base,
			char format, int *count);
void	ft_putpointer(void *pointer, int *count);

#endif //FT_PRINTF_H
