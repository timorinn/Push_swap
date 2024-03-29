/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 16:46:13 by bford             #+#    #+#             */
/*   Updated: 2019/11/01 11:47:45 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_print_pa(int *a, int *b, int p)
{
	if (p % 10 == 1 && p / 10 && ft_is_sort(a) && !b[0])
		ft_putstr("\033[1;31mpa\n\033[0m");
	else if (p % 10 == 1)
		ft_putstr("pa\n");
	else if (p % 10 == 2 && p / 10 && ft_is_sort(a) && !b[0])
	{
		ft_putstr("\033[1;31m ______    _____ \n|  __  \\  / __  |\n\
| |__| | | |  | |\n|  ___/  | |__| |\n| |      |  __  |\n\
|_|      |_|  |_|\n\n\033[0m");
		ft_print_ab(a, b);
	}
	else if (p % 10 == 2)
	{
		ft_putstr(" ______    _____ \n|  __  \\  / __  |\n\
| |__| | | |  | |\n|  ___/  | |__| |\n| |      |  __  |\n\
|_|      |_|  |_|\n\n");
		ft_print_ab(a, b);
	}
}

int				ft_pa(int *a, int *b, int p)
{
	int		x;

	if (b[0] > 0)
	{
		x = a[0];
		while (x)
		{
			a[x + 1] = a[x];
			x--;
		}
		a[1] = b[1];
		b[0]--;
		a[0]++;
		x = 1;
		while (x <= b[0])
		{
			b[x] = b[x + 1];
			x++;
		}
		b[b[0] + 1] = 666;
	}
	ft_print_pa(a, b, p);
	return (1);
}
