/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 11:39:55 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/04 13:51:18 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

// [INCLUDES]
# include <stdarg.h>
# include "libft.h"

// [PROTOTYPES]
int		ft_printf(const char *format, ...);

void	ft_putstr_count(char *s, int *count);
void	ft_putchar_count(char c, int *count);
void	ft_putnbr_signed(long long n, int *count);
void	ft_putnbr_unsigned(unsigned long long n, int base,
			char format, int *count);
void	ft_putpointer(void *pointer, int *count);

#endif //PRINTF_H
