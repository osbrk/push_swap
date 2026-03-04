# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 14:38:46 by osukhore          #+#    #+#              #
#    Updated: 2026/03/04 13:05:06 by osukhore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			:=	libft.a
FLAGS			:=	-c -Wall -Wextra -Werror

# // [COMMANDS]
CC				:=	@cc
AR				:=	@/bin/ar rcs
MKDIR			:=	@/bin/mkdir
RM				:=	@/bin/rm -rf

# // [SOURCES]
SRCS_DIR		:=	srcs/

SRCS_IS			:=	ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isdigit.c \
					ft_isprint.c \
					ft_isspace.c

SRC_STR			:=	ft_split.c \
					ft_strcat.c \
					ft_strchr.c \
					ft_strcmp.c \
					ft_strcpy.c \
					ft_strdup.c \
					ft_striteri.c \
					ft_strjoin.c \
					ft_strjoin_with_space.c \
					ft_strlcat.c \
					ft_strlcpy.c \
					ft_strlen.c \
					ft_strmapi.c \
					ft_strncmp.c \
					ft_strnstr.c \
					ft_strrchr.c \
					ft_strtrim.c \
					ft_substr.c

SRC_MEM			:=	ft_bzero.c \
					ft_calloc.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_memset

SRC_CNV			:=	ft_toupper.c \
					ft_tolower.c \
					ft_atoi.c \
					ft_atol.c \
					ft_itoa.c


SRC_FD			:=	ft_putchar_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c \
					ft_putnbr_base_fd.c \
					ft_putstr_fd.c

SRC_PRINT		:=	ft_printf.c \
					ft_putchar_count.c \
					ft_putnbr_count.c \
					ft_putpointer.c \
					ft_putstr_count.c

SRC_GNL			:=	get_next_line.c \
					get_next_line_utils.c

SRCS			:=	$(SRC_IS) $(SRC_STR) $(SRC_MEM) $(SRC_CNV) \
					$(SRC_FD) $(SRC_PRINT) $(SRC_GNL)

# // [OBJECTS]
OBJS_DIR		:= objs/

OBJS			:= $(addprefix $(OBJS_DIR), $(SRCS:.c=.o))

# // [EXECUTION]
all:			$(NAME)

$(NAME):		$(OBJS)
				$(AR) $(NAME) $(OBJS)

$(OBJS_DIR)%.o:	$(SRCS_DIR)%.c
				$(MKDIR) -p $(dir $@)
				$(CC) $(FLAGS) $(INC) $< -o $@

clean:
				$(RM) $(OBJS_DIR)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY: all clean fclean re