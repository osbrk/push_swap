/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 14:39:40 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/06 14:46:17 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// [INCLUDES]
# include "../libft/inc/libft.h"
# include "../libft/inc/printf.h"
# include "../libft/inc/get_next_line.h"

// [DEFINITIONS]
typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
}	t_stack;


// [PROTOTYPES]
// ERRORS
char	**check_error(char **argv);
char	**free_forward(char **to_free);
char	**error_message(char **to_free);

// STACKS
t_stack	*make_stack(char **argv);
void	indexing(t_stack *stack, int size);
int		stack_size(t_stack *list);
t_stack	*stack_new(int content);
t_stack	*stack_last(t_stack *list);
void	stack_add_front(t_stack **list, t_stack *new);
void	stack_add_back(t_stack **list, t_stack *new);
void	stack_clear (t_stack **stack);

// OPERATIONS
void	push_pa(t_stack **stack_a, t_stack **stack_b);
void	push_pb(t_stack **stack_a, t_stack **stack_b);
void	rotate_rra(t_stack **stack);
void	rotate_rrb(t_stack **stack);
void	rotate_rrr(t_stack **stack_a, t_stack **stack_b);
void	rotate_ra(t_stack **stack);
void	rotate_rb(t_stack **stack);
void	rotate_rr(t_stack **stack_a, t_stack **stack_b);
void	swap_sa(t_stack **stack);
void	swap_sb(t_stack **stack);
void	swap_ss(t_stack **stack_a, t_stack **stack_b);

// SORTING
void	sort_stack(t_stack **stack_a, t_stack **stack_b);
t_stack	*find_min(t_stack *stack);
t_stack	*find_max(t_stack *stack);
int		check_sort(t_stack *stack);

#endif //PUSH_SWAP_H