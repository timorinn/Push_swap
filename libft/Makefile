# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bford <bford@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/25 10:42:47 by bford             #+#    #+#              #
#    Updated: 2019/10/25 18:37:43 by bford            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS :=		ft_atoll.c			\
			ft_badsort.c		\
			ft_check_arg.c		\
			ft_check_borders.c	\
			ft_checkersort.c	\
			ft_del_strarray.c	\
			ft_do_job.c			\
			ft_do_sort.c		\
			ft_is_sort.c		\
			ft_isdigit.c		\
			ft_little_sort.c	\
			ft_make_arg.c		\
			ft_make_array.c		\
			ft_normsort.c		\
			ft_pa.c				\
			ft_pb.c				\
			ft_print_ab.c		\
			ft_putstr.c			\
			ft_ra.c				\
			ft_rb.c				\
			ft_rr.c				\
			ft_rra.c			\
			ft_rrb.c			\
			ft_rrr.c			\
			ft_sa.c				\
			ft_sb.c				\
			ft_split_array.c	\
			ft_ss.c				\
			ft_strcmp.c			\
			ft_strdel.c			\
			ft_strdup.c			\
			ft_strjoinfree.c	\
			ft_strlen.c			\
			ft_strncpy.c		\
			ft_strnew.c			\
			ft_strsplit.c		\
			ft_putnbr.c			\
			ft_putchar.c		\
			ft_do_start.c		\
			ft_min.c			\
			ft_max.c

OBJS =		$(SRCS:%.c=%.o)

HEAD =		libft.h

NAME =		libft.a

.PHONY: 	all clean fclean re

all: 		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

%.o:		%.c $(HEAD)
			gcc -I $(HEAD) -Wall -Wextra -Werror -c $< -o $@

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all
