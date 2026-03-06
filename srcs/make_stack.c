/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 12:38:51 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/06 12:14:20 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//t_stack	*make_a_stack(int argc, char **argv)
//{
//	int			counter;
//	char		**tmp_argv;
//	int			tmp_nbr;
//	t_stack		*ret_stack;
//
//	counter = 0;
//	if (argc == 2)
//		tmp_argv = ft_split(argv[1], ' ');
//	else
//		tmp_argv = argv + 1;
//	while (tmp_argv[counter])
//	{
//		tmp_nbr = ft_atoi(tmp_argv[counter]);
//		if (counter == 0)
//			ret_stack = stack_new(tmp_nbr);
//		else
//			stack_add_back(&ret_stack, stack_new(tmp_nbr));
//		counter++;
//	}
//	if (argc == 2)
//		tmp_argv = free_table_string(tmp_argv);
//	return (ret_stack);
//}

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