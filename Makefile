# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osukhore <osukhore@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/07 13:16:15 by osukhore          #+#    #+#              #
#    Updated: 2026/03/04 12:10:41 by osukhore         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			:=	push_swap
LIBFT			:=	libft/libft.a
FLAGS			:=	-c -Wall -Wextra -Werror -g

///// COMMANDS \\\\\
CC				:=	@cc
CP				:=	@/bin/cp
MAKE			:=	@make -C libft
MKDIR			:=	@/bin/mkdir
RM				:=	@/bin/rm -rf

///// INCLUDES \\\\\
INC				:=	-I ./inc/

///// SOURCES \\\\\
SRCS_DIR		:=	srcs/

PARSING			:=	arg_check.c \
					errors.c \


OPERATIONS		:=

PUSH_SWAP		:=	push_swap.c

SRCS			:=	$(PARSING) $(OPERATIONS) $(PUSH_SWAP)

///// OBJECTS \\\\\
OBJS_DIR		:=	objs/

OBJS			:=	$(addprefix $(OBJS_DIR), $(SRCS:.c=.o))

///// EXECUTION \\\\\
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
//// EDITING

NAME := push_swap.a
LIBFT = $(LIBDIR)libft.a
CC := cc
CFLAGS := -Wall -Wextra -Werror
CFLAGS += -g

OBJ_DIR = obj/
LIBDIR = ./libft/

IFLAGS = -I$(LIBDIR)
LIFLAGS = -L.
LFLAGS += -lft
LIFLAGS += -L$(LIBDIR)
LFLAGS = -lftpush_swap

SRC_FILES := \
push_swap.c \

OBJ_FILES := $(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

$(OBJ_DIR)%.o: %.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(LIBFT):
	$(MAKE) -C $(LIBDIR)
	cp $(LIBFT) $(NAME)

clean:
	$(MAKE) -C $(LIBDIR) clean
	rm -f $(OBJ_FILES)
	@rm -rf $(OBJ_DIR)

fclean: clean
	$(MAKE) -C $(LIBDIR) fclean
	rm -f $(NAME)

re: fclean all

test: fclean $(NAME)
	$(CC) $(CFLAGS) OS_push_swap.c $(IFLAGS) $(LIFLAGS) $(LFLAGS)
	valgrind ./a.out
#	./a.out

.PHONY: all clean fclean re test
