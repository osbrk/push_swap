/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:27:37 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/05 15:42:43 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_nbr_bits(int nbr)
{
	int max_bits;

	max_bits = 0;
	while (nbr >> max_bits)
		max_bits++;
	return (max_bits);
}

static void	sort_three(t_stack **stack_a)
{
	int	max;

	max = find_max((*stack_a)->index);
	if ((*stack_a)->index == max)
		rotate_ra(stack_a);
	else if ((*stack_a)->next->index == max)
		rotate_rra(stack_a);
	if ((*stack_a)->index > (*stack_a)->next->index)
	swap_sa(stack_a);
}

static void	sort_five(t_stack **stack_a, t_stack **stack_b, int size)
{
	while(size--)
	{
		if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
			push_pb(stack_a, stack_b);
		else (rotate_ra(stack_a));
	}
	sort_three(stack_a);
	push_pa(stack_a, stack_b);
	push_pa(stack_a, stack_b);
	if ((*stack_a)->index > (*stack_a)->next->index)
		swap_sa(stack_a);
}

static void	sort_all(t_stack **stack_a, t_stack **stack_b, int size)
{
	int	max;
	int	max_bits;
	int	i;
	int	j;

	max = size - 1;
	max_bits = get_nbr_bits(max);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j <= max)
		{
			if (((*stack_a)->index >> i) & 1)
				rotate_ra(stack_a)
			else
				push_pb(stack_a, stack_b);
			j++;
		}
		while (*stack_b)
			push_pa(stack_a, stack_b);
		i++;
	}
}

void	sort_stack(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = stack_size(*stack_a);
	if (check_sort(*stack_a))
		return ;
	if (size <= 3)
		sort_three(stack_a);
	else if (size <= 5)
		sort_five(stack_a, stack_b, size);
	else
		sort_all(stack_a, stack_b, size);
}


