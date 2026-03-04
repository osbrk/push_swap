/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 14:10:10 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/04 14:12:22 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstdup(t_list *node)
{
	t_list	*node_copy;
	char	*content_copy;

	if (!node)
		return (NULL);
	content_copy = ft_strdup(node->content);
	if (!node_copy)
	{
		free(content_copy);
		return (NULL);
	}
	node_copy->index = node->index;
	return (node_copy);
}
