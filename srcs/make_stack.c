/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 12:38:51 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/24 11:52:12 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*make_stack(char **argv)
{
	int		count;
	int		tmp_nbr;
	t_stack	*result_stack;

	count = 0;
	while (argv[count])
	{
		tmp_nbr = ft_atoi(argv[count]);
		if (count == 0)
			result_stack = stack_new(tmp_nbr);
		else
			stack_add_back(&result_stack, stack_new(tmp_nbr));
		count++;
	}
	return (result_stack);
}

void	indexing(t_stack *stack, int size)
{
	t_stack	*large;
	t_stack	*tmp;

	while (size--)
	{
		large = NULL;
		tmp = stack;
		while (tmp)
		{
			if (!tmp->index && (large == NULL
				|| tmp->content > large->content))
				large = tmp;
			tmp = tmp->next;
		}
		if (large)
			large->index = size;
	}
}