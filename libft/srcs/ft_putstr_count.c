/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:30:12 by osukhore          #+#    #+#             */
/*   Updated: 2025/11/24 12:34:35 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_count(char *s, int *count)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		write (1, &s[i], 1);
		(*count)++;
		i++;
	}
}
