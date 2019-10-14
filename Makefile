# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bford <bford@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/13 14:02:35 by bford             #+#    #+#              #
#    Updated: 2019/10/14 19:17:37 by bford            ###   ########.fr        #
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

exe:
	gcc $(FLAG) -c ./libft/*.c ./libft/*.h
	gcc $(FLAG) -c -I ./libft main.c
	gcc $(FALG) *.o
	/bin/rm -f *.o
	/bin/rm -f ./libft/*.gch

clean:
	/bin/rm -f *.o

fclean:	clean
		/bin/rm -f $(NAME)

re:		fclean all

push:
	git add -A && git commit -ma && git push
