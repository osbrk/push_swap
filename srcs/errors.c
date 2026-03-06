/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 10:52:09 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/06 12:14:23 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//char	**send_error(char **to_free)
//{
//	if (to_free)
//		free_table_string(to_free);
//	ft_putendl_fd("Error", 2);
//	exit(1);
//}
//
//char	**free_table_string(char **s)
//{
//	int	i;
//
//	i = 0;
//	while (s[i])
//	{
//		free(s[i]);
//		i++;
//	}
//	free(s);
//	return (NULL);
//}

// ERROR MANAGEMENT
void	free_forward(char **to_free)
{
	int	i;

	i = -1;
	while (to_free[++i])
		free(to_free[i]);
	free(to_free);
}

void	error_message(char **to_free)
{
	free_forward(to_free);
	ft_putendl_fd("Error", 2);
}
