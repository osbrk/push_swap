/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 11:35:05 by osukhore          #+#    #+#             */
/*   Updated: 2026/03/05 11:26:36 by osukhore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

// [INCLUDES]
# include "libft.h"

# include <fcntl.h>
# include <stddef.h>

// [DEFINITIONS]
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif // BUFFER_SIZE

# ifndef SEPARATOR
#  define SEPARATOR '\n'
# endif //SEPARATOR

# ifndef FD_MAX
#  define FD_MAX 1024
# endif // FD_MAX

// [PROTOTYPES]
char	*get_next_line(int fd);

#endif // GET_NEXT_LINE
