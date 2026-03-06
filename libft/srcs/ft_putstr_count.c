/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:30:12 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/06 10:49:31 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
