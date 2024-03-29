/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:04:58 by bford             #+#    #+#             */
/*   Updated: 2019/11/01 11:48:21 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_swap_sa(int *a)
{
	if (a[0] > 1)
	{
		a[1] = a[1] - a[2];
		a[2] = a[2] + a[1];
		a[1] = a[2] - a[1];
	}
}

int			ft_sa(int *a, int *b, int p)
{
	ft_swap_sa(a);
	if (p % 10 == 1 && p / 10 && ft_is_sort(a) && !b[0])
		ft_putstr("\033[1;31msa\n\033[0m");
	else if (p % 10 == 1)
		ft_putstr("sa\n");
	else if (p % 10 == 2 && p / 10 && ft_is_sort(a) && !b[0])
	{
		ft_putstr("\033[1;31m ______    _____ \n\
/  __  \\  / __  |\n| |  |_| | |  | |\n\
| |___   | |__| |\n\\____  \\ |  __  |\n _   | | |_|  |_|\n| |__| |\n\
\\______/\n\n\033[0m");
		ft_print_ab(a, b);
	}
	else if (p % 10 == 2)
	{
		ft_putstr(" ______    _____ \n\
/  __  \\  / __  |\n| |  |_| | |  | |\n\
| |___   | |__| |\n\\____  \\ |  __  |\n _   | | |_|  |_|\n| |__| |\n\
\\______/\n\n");
		ft_print_ab(a, b);
	}
	return (1);
}
