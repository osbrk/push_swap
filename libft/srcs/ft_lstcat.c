/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 14:15:03 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/04 14:16:32 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstcat(t_list **list1, t_list *list2)
{
	t_list	*last;

	if (!list1)
		return ;
	if (!*list1)
	{
		*list1 = list2;
		return ;
	}
	last = ft_l
}
