/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:26:36 by bford             #+#    #+#             */
/*   Updated: 2019/11/01 11:48:11 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print_rra(int *a, int *b, int p)
{
	if (p % 10 == 1 && p / 10 && ft_is_sort(a) && !b[0])
		ft_putstr("\033[1;31mrra\n\033[0m");
	else if (p % 10 == 1)
		ft_putstr("rra\n");
	else if (p % 10 == 2 && p / 10 && ft_is_sort(a) && !b[0])
	{
		ft_putstr("\033[1;31m ______   ______    _____\n\
|  __  \\ |  __  \\  / __  |\n| |__| | | |__| | | |  | |\n\
|    _/  |    _/  | |__| |\n| |\\ \\   | |\\ \\   |  __  |\n\
|_| \\_\\  |_| \\_\\  |_|  |_|\n\n\033[0m");
		ft_print_ab(a, b);
	}
	else if (p % 10 == 2)
	{
		ft_putstr(" ______   ______    _____\n\
|  __  \\ |  __  \\  / __  |\n| |__| | | |__| | | |  | |\n\
|    _/  |    _/  | |__| |\n| |\\ \\   | |\\ \\   |  __  |\n\
|_| \\_\\  |_| \\_\\  |_|  |_|\n\n");
		ft_print_ab(a, b);
	}
}

int			ft_rra(int *a, int *b, int p)
{
	int		i;
	int		copy;

	if ((i = a[0]) > 1)
	{
		i = a[0];
		copy = a[a[0]];
		while (i > 1)
		{
			a[i] = a[i - 1];
			i--;
		}
		a[1] = copy;
	}
	ft_print_rra(a, b, p);
	return (1);
}
