/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 10:52:09 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/06 15:13:19 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ERROR MANAGEMENT
char	**free_forward(char **to_free)
{
	int	i;

	i = -1;
	while (to_free[++i])
		free(to_free[i]);
	free(to_free);
	return (NULL);
}

char	**error_message(char **to_free)
{
	if (to_free)
		free_forward(to_free);
	ft_putendl_fd("Error", 2);
	exit(1);
}
