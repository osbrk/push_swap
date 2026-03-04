/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 14:05:54 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/04 14:07:46 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **list, void (*del)(void*))
{
	t_list	*head;
	t_list	*node;

	if (!list || !del)
		return ;
	head = *list;
	while (head)
	{
		node = head->next;
		ft_lstdelone(head, del);
		head = node;
	}
	*list = NULL;
}
