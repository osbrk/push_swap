/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 14:35:04 by osukhore          #+#    #+#             */
/*   Updated: 2026/02/24 15:05:01 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	num_check(const char *str)
{
	int	i;

	i = 0;
	if (str[i] == "-" || str[i] == "+")
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}



// What do we want to do here?
// 1. FT_SPLIT using the ' ' [space]
// 2. Check each resulting string if: isdigit, atoi accepts +/-, isdup
// 3. Errors to be printed in separate function.c
// 4. How to take input in number and string form?