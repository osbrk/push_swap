/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 12:54:36 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/05 13:03:06 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(int content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->index = 0;
	new->next = NULL;
	return (new);
}

t_stack	*stack_last(t_stack *list)
{
	if (list == NULL)
		return (NULL);
	while (list->next)
		list = list->next;
	return (list);
}

void	stack_add_front(t_stack **list, t_stack *new)
{
	if (new == NULL)
		return ;
	if (*list)
		new->next = *list;
	else
		new->next = NULL;
	*list = new;
}

void	stack_add_back(t_stack **list, t_stack *new)
{
	if (*list)
		stack_last(*list)->next = new;
	else
		*list = new;
}

void	stack_clear (t_stack **stack)
{
	t_stack	*tmp;

	while(*stack)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
}