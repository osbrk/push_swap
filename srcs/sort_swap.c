/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:59:08 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/05 15:04:19 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	tmp->next = *stack;
	*stack = tmp;
}

void	swap_sa(t_stack **stack)
{
	swap_stack(stack);
	ft_putendl_fd("sa", 1);
}

void	swap_sb(t_stack **stack)
{
	swap_stack(stack);
	ft_putendl_fd("sb", 1);
}

void	swap_ss(t_stack **stack_a, t_stack **stack_b)
{
	swap_stack(stack_a);
	swap_stack(stack_b);
	ft_putendl_fd("ss", 1);
}
