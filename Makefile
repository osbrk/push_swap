# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/07 13:16:15 by osukhore          #+#    #+#              #
#    Updated: 2026/03/06 15:43:04 by osukhore         ###   ########.fr        #
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
LIBFT_DIR		:=	./libft
LIBFT			:=	$(LIBFT_DIR)/libft.a

# // [INCLUDES]
INC				:=	-I ./inc/

# // [SOURCES]
SRCS_DIR		:=	srcs/

PARSING			:=	arg_check.c \
					errors.c

STACKS			:=	make_stack.c \
					stack_utils.c

OPERATIONS		:=	sort_push.c \
					sort_reverse_rotate.c \
					sort_rotate.c \
					sort_stack.c \
					sort_swap.c \
					sort_utils.c

PUSH_SWAP		:=	push_swap.c

SRCS			:=	$(PARSING) $(STACKS) $(OPERATIONS) $(PUSH_SWAP)

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

#$(LIBFT):
#				$(MAKE) -C $(LIBFT_DIR)