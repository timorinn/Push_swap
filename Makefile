# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bford <bford@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/13 14:02:35 by bford             #+#    #+#              #
#    Updated: 2019/10/13 20:33:29 by bford            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Werror -Wextra

exe:
	gcc $(FLAG) -c ./libft/*.c ./libft/*.h
	gcc $(FLAG) -c -I ./libft main.c
	gcc $(FALG) *.o
	/bin/rm -f *.o
	/bin/rm -f ./libft/*.gch

clean:
	/bin/rm -f *.o
