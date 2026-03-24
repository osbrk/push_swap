/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 14:08:10 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/24 12:06:11 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *data)
{
	if (data)
		free(data);
	else
		return ;
}

void	ft_lstdelone(t_list *list, void (*del)(void*))
{
	if (!list || !del)
		return ;
	else
		del(list->content);
	free(list);
}
