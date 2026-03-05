/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_reverse_rotate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:09:26 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/05 15:15:28 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_reverse_stack(t_stack **first)
{
	t_stack	*prev_last;
	t_stack	*new_last;

	if (*first == NULL || (*first)->next == NULL)
		return ;
	prev_last = *first;
	while (prev_last->next != NULL)
	{
		new_last = prev_last;
		prev_last = prev_last->next;
	}
	prev_last->next = *first;
	new_last->next = NULL;
	*first = prev_last;
}

void	rotate_rra(t_stack **stack)
{
	rotate_reverse_stack(stack);
	ft_putendl_fd("rra", 1);
}

void	rotate_rrb(t_stack **stack)
{
	rotate_reverse_stack(stack);
	ft_putendl_fd("rrb", 1);
}

void	rotate_rrr(t_stack **stack_a, t_stack **stack_b)
{
	rotate_reverse_stack(stack_a);
	rotate_reverse_stack(stack_b);
	ft_putendl_fd("rrr", 1);
}
