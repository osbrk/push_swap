# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/07 13:16:15 by osukhore          #+#    #+#              #
#    Updated: 2026/03/04 13:04:24 by osukhore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			:=	push_swap
LIBFT			:=	libft/libft.a
FLAGS			:=	-c -Wall -Wextra -Werror -g

# // [COMMANDS]
CC				:=	@cc
CP				:=	@/bin/cp
MAKE			:=	@make -C libft
MKDIR			:=	@/bin/mkdir
RM				:=	@/bin/rm -rf

# // [INCLUDES]
INC				:=	-I ./inc/

# // [SOURCES] STILL TO MODIFY WITH MORE .C
SRCS_DIR		:=	srcs/

PARSING			:=	arg_check.c \
					errors.c \


OPERATIONS		:=

PUSH_SWAP		:=	push_swap.c

SRCS			:=	$(PARSING) $(OPERATIONS) $(PUSH_SWAP)

# // [OBJECTS]
OBJS_DIR		:=	objs/

OBJS			:=	$(addprefix $(OBJS_DIR), $(SRCS:.c=.o))

# // [EXECUTION]
all:			$(NAME)

$(NAME):		$(OBJS)
				$(MAKE)
				$(CP) $(LIBFT) $(NAME)
				$(CC) $(OBJS) ./libft/libft.a -o $(NAME)

$(OBJS_DIR)%.o:	$(SRCS_DIR)%.c
				$(MKDIR) -p $(dir $@)
				$(CC) $(FLAGS) $(INC) $< -o $@

clean:
				$(RM) $(OBJS_DIR)
				make clean -C libft

fclean:			clean
				$(RM) $(NAME)
				$(RM) $(LIBFT)

re:				fclean all

.PHONY:	all clean fclean re