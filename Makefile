# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bford <bford@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/13 14:02:35 by bford             #+#    #+#              #
#    Updated: 2019/10/30 11:20:12 by bford            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_DIR := ./includes
OBJS_DIR := ./objs

SRCS_C :=		includes/checker.c

SRCS_P :=		includes/push_swap.c

OBJS_C := $(SRCS_C:.c=.o)

OBJS_P := $(SRCS_P:.c=.o)

FLAG := -Wall -Werror -Wextra

LIBFT := ./libft

NAME :=	push_swap

NAME2 := checker

.PHONY: all clean lib fclean re

all:	lib $(NAME) $(NAME2)

%.o:	%.c
			gcc -I $(LIBFT) -o $@ -c $<

$(NAME):	$(OBJS_P) ./libft/libft.a
			gcc -o push_swap $(OBJS_P) -L ./libft -lft

$(NAME2): $(OBJS_C) ./libft/libft.a
			gcc -o checker $(OBJS_C) -L ./libft -lft


lib:
			make -C ./libft

clean:
			rm -f $(OBJS_C) $(OBJS_P)
			make clean -C ./libft

fclean: 	clean
			rm -f checker
			rm -f push_swap
			make fclean -C ./libft

re:			fclean all

push:
			git add -A && git commit -ma && git push
