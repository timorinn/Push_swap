/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:18:53 by bford             #+#    #+#             */
/*   Updated: 2019/11/01 11:48:05 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print_rb(int *a, int *b, int p)
{
	if (p % 10 == 1 && p / 10 && ft_is_sort(a) && !b[0])
		ft_putstr("\033[1;31mrb\n\033[0m");
	else if (p % 10 == 1)
		ft_putstr("rb\n");
	else if (p % 10 == 2 && p / 10 && ft_is_sort(a) && !b[0])
	{
		ft_putstr("\033[1;31m ______   ______ \n|  __  \\ |  __  \\\n\
| |__| | | |__| /\n|    _/  |  __  \\\n| |\\ \\   | |__| |\n\
|_| \\_\\  |______/\n\n\033[0m");
		ft_print_ab(a, b);
	}
	else if (p % 10 == 2)
	{
		ft_putstr(" ______   ______ \n|  __  \\ |  __  \\\n\
| |__| | | |__| /\n|    _/  |  __  \\\n| |\\ \\   | |__| |\n\
|_| \\_\\  |______/\n\n");
		ft_print_ab(a, b);
	}
}

int			ft_rb(int *a, int *b, int p)
{
	int		i;
	int		copy;

	if (b[0] > 1)
	{
		i = 1;
		copy = b[1];
		while (i < b[0])
		{
			b[i] = b[i + 1];
			i++;
		}
		b[b[0]] = copy;
	}
	ft_print_rb(a, b, p);
	return (1);
}
