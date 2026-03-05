/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:04:53 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/05 15:08:55 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_stack(t_stack **first)
{
	t_stack	*tmp;
	t_stack	*last;

	if (*first == NULL || (*first)->next == NULL)
		return ;
	tmp = *first;
	*first = (*first)->next;
	last = stack_last(*first);
	tmp->next = NULL;
	last->next = tmp;
}

void	rotate_ra(t_stack **stack)
{
	rotate_stack(stack);
	ft_putendl_fd("ra", 1);
}

void	rotate_rb(t_stack **stack)
{
	rotate_stack(stack);
	ft_putendl_fd("rb", 1);
}

void	rotate_rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate_stack(stack_a);
	rotate_stack(stack_b);
	ft_putendl_fd("rr", 1);
}
