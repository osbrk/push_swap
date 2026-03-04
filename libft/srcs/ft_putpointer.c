/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 11:31:58 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/24 12:34:32 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putpointer(void *pointer, int *count)
{
	unsigned long long	address;

	if (pointer == NULL)
	{
		ft_putstr_count("(nil)", count);
		return ;
	}
	address = (unsigned long long) pointer;
	ft_putstr_count("0x", count);
	ft_putnbr_unsigned(address, 16, 'p', count);
}
