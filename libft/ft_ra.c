/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:11:19 by bford             #+#    #+#             */
/*   Updated: 2019/10/25 16:53:29 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print_ra(int *a, int *b, int p)
{
	if (p == 1)
		ft_putstr("ra\n");
	else if (p == 2)
	{
		ft_putstr("\n ______    _____ \n|  __  \\  / __  |\n\
| |__| | | |  | |\n|    _/  | |__| |\n| |\\ \\   |  __  |\n\
|_| \\_\\  |_|  |_|\n\n");
		ft_print_ab(a, b);
	}
}

int			ft_ra(int *a, int *b, int p)
{
	int		i;
	int		copy;

	i = 1;
	copy = a[1];
	while (i < a[0])
	{
		a[i] = a[i + 1];
		i++;
	}
	a[a[0]] = copy;
	ft_print_ra(a, b, p);
	return (1);
}
