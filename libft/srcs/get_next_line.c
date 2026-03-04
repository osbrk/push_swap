/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 11:35:00 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/04 13:50:56 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*clear_all(char *buf, char *placeholder)
{
	if (buf != NULL)
		free(buf);
	if (placeholder != NULL)
		free(placeholder);
	return (NULL);
}

static char	*read_into_placeholder(int fd, char *placeholder)
{
	char	*buf;
	ssize_t	bytes;

	buf = malloc(BUFFER_SIZE + 1);
	if (buf == NULL)
		return (NULL);
	bytes = 1;
	while (ft_strchr(placeholder, SEPARATOR) == NULL && bytes > 0)
	{
		bytes = read(fd, buf, BUFFER_SIZE);
		if (bytes < 0)
			return (clear_all(buf, placeholder));
		buf[bytes] = '\0';
		if (bytes == 0)
			break ;
		placeholder = ft_strjoin(placeholder, buf);
		if (placeholder == NULL)
			return (clear_all(buf, NULL));
	}
	free(buf);
	return (placeholder);
}

static char	*extract_line(char *placeholder)
{
	size_t	i;

	if (placeholder == NULL || placeholder[0] == '\0')
		return (NULL);
	i = 0;
	while (placeholder[i] && placeholder[i] != SEPARATOR)
		i++;
	if (placeholder[i] == SEPARATOR)
		i++;
	return (ft_substr(placeholder, 0, i));
}

static char	*update_placeholder(char *placeholder)
{
	size_t	i;
	char	*next;

	if (placeholder == NULL)
		return (NULL);
	i = 0;
	while (placeholder[i] && placeholder[i] != SEPARATOR)
		i++;
	if (placeholder[i] == '\0')
	{
		free(placeholder);
		return (NULL);
	}
	i++;
	next = ft_substr(placeholder, i, ft_strlen(placeholder + i));
	free(placeholder);
	return (next);
}

char	*get_next_line(int fd)
{
	static char	*placeholder[FD_MAX];
	char		*line;

	if (fd < 0 || fd >= FD_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	placeholder[fd] = read_into_placeholder(fd, placeholder[fd]);
	if (placeholder[fd] == NULL)
		return (NULL);
	line = extract_line(placeholder[fd]);
	placeholder[fd] = update_placeholder(placeholder[fd]);
	return (line);
}

