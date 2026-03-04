/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 14:39:40 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/04 13:10:49 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "libft.h"

int		check_nbr(const char *nbr);
int		check_error(char **argv);
void	free_forward(char **to_free);
void	error_message(char **to_free);

#endif //PUSH_SWAP_H