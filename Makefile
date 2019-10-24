# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bford <bford@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/13 14:02:35 by bford             #+#    #+#              #
#    Updated: 2019/10/24 16:53:50 by bford            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Werror -Wextra

LIBFT =	./libft

NAME =	libft.a

all:	$(NAME)

$(NAME):
	gcc $(FLAGS) -c ./libft/*.c
	gcc $(FLAGS) -c -I$(LIBFT) *.c
	ar rcs libft.a *.o
	ranlib libft.a
	gcc *.o -o push_swap

exep:
	gcc $(FLAG) -c ./libft/*.c ./libft/*.h
	gcc $(FLAG) -c -I ./libft push_swap.c
	gcc $(FALG) *.o -o push_swap
	/bin/rm -f *.o
	/bin/rm -f ./libft/*.gch

exec:
	gcc $(FLAG) -c ./libft/*.c ./libft/*.h
	gcc $(FLAG) -c -I ./libft checker.c
	gcc $(FALG) *.o -o checker
	/bin/rm -f *.o
	/bin/rm -f ./libft/*.gch

clean:
	/bin/rm -f *.o

fclean:	clean
		/bin/rm -f $(NAME)

re:		fclean all

push:
	git add -A && git commit -ma && git push
