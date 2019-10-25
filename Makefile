# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bford <bford@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/13 14:02:35 by bford             #+#    #+#              #
#    Updated: 2019/10/25 12:48:11 by bford            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_DIR := ./includes
OBJS_DIR := ./objs

SRCS_C :=		checker.c

SRCS_P :=		push_swap.c

OBJS_C := $(addprefix $(SRCS_DIR)/,$(SRCS_C:.c=.o))

OBJS_P := $(addprefix $(SRCS_DIR)/,$(SRCS_P:.c=.o))

FLAG := -Wall -Werror -Wextra

LIBFT := ./libft

NAME_C :=	checker

NAME_P :=	push_swap

.PHONY: all clean lib fclean re

all:	$(NAME_C) | $(NAME_P)

$(SRCS_DIR)/%.o:	$(SRCS_DIR)/%.c | lib
					gcc -I $(LIBFT) -o $@ -c $<

$(NAME_P):	$(SRCS_DIR) $(OBJS_P) | lib
			gcc -o push_swap $(OBJS_P) -L ./libft -lft

$(NAME_C):	$(SRCS_DIR) $(OBJS_C) | lib
			gcc -o checker $(OBJS_C) -L ./libft -lft

lib:
	make -C ./libft

clean:
		rm -rf $(OBJS_DIR)
		make clean -C ./libft


re:		fclean all

push:
		git add -A && git commit -ma && git push
