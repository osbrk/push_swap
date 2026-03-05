/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:50:24 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/05 13:58:09 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_stack(t_stack **stack_1, t_stack **stack_2)
{
	t_stack	*tmp;

	if (stack_1 == NULL || *stack_1 == NULL)
		return ;
	tmp = *stack_1;
	*stack_1 = (*stack_1)->next;
	stack_add_front(stack_2, tmp);
}

void	push_pa(t_stack **stack_a, t_stack **stack_b)
{
	push_stack(stack_b, stack_a);
	ft_putendl_fd("pa", 1);
}

void	push_pb(t_stack **stack_a, t_stack **stack_b)
{
	push_stack(stack_a, stack_b);
	ft_putendl_fd("pb", 1);
}