/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 15:11:07 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/05 16:06:39 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	**input;
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		return (0);
	input = check_error(argv);
	stack_a = make_stack(input);
	stack_b = NULL;
	indexing(stack_a, stack_size(stack_a));
	sort_stack(&stack_a, &stack_b);
	stack_clear(&stack_a);
	stack_clear(&stack_b);
}
