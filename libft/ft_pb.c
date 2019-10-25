/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 16:03:33 by bford             #+#    #+#             */
/*   Updated: 2019/10/25 16:54:46 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print_pb(int *a, int *b, int p)
{
	if (p == 1)
		ft_putstr("pb\n");
	else if (p == 2)
	{
		ft_putstr("\n ______   ______ \n|  __  \\ |  __  \\\n\
| |__| | | |__| /\n|  ___/  |  __  \\\n| |      | |__| |\n\
|_|      |______/\n\n");
		ft_print_ab(a, b);
	}
}

int			ft_pb(int *a, int *b, int p)
{
	int		x;

	if (a[0] < 1)
		return (0);
	x = b[0];
	while (x)
	{
		b[x + 1] = b[x];
		x--;
	}
	b[1] = a[1];
	a[0]--;
	b[0]++;
	x = 1;
	while (x <= a[0])
	{
		a[x] = a[x + 1];
		x++;
	}
	a[a[0] + 1] = 666;
	ft_print_pb(a, b, p);
	return (1);
}
