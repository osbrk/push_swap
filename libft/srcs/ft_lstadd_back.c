/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 13:57:18 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/04 13:58:55 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*last;

	if (!list || !new)
		return ;
	if (*list == NULL)
		*list = new;
	else
	{
		last = ft_lstlast(*list);
		last->next = new;
	}
}
