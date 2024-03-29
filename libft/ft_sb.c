/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:05:14 by bford             #+#    #+#             */
/*   Updated: 2019/11/01 11:48:24 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_swap_sb(int *b)
{
	if (b[0] > 1)
	{
		b[1] = b[1] - b[2];
		b[2] = b[2] + b[1];
		b[1] = b[2] - b[1];
	}
}

int			ft_sb(int *a, int *b, int p)
{
	ft_swap_sb(b);
	if (p % 10 == 1 && p / 10 && ft_is_sort(a) && !b[0])
		ft_putstr("\033[1;31msb\n\033[0m");
	else if (p % 10 == 1)
		ft_putstr("sb\n");
	else if (p % 10 == 2 && p / 10 && ft_is_sort(a) && !b[0])
	{
		ft_putstr("\033[1;31m ______   ______ \n\
/  __  \\ |  __  \\\n| |  |_| | |__| /\n\
| |___   |  __  \\\n\\____  \\ | |__| |\n _   | | |______/\n| |__| |\n\
\\______/\n\n\033[0m");
		ft_print_ab(a, b);
	}
	else if (p % 10 == 2)
	{
		ft_putstr(" ______   ______ \n\
/  __  \\ |  __  \\\n| |  |_| | |__| /\n\
| |___   |  __  \\\n\\____  \\ | |__| |\n _   | | |______/\n| |__| |\n\
\\______/\n\n");
		ft_print_ab(a, b);
	}
	return (1);
}
