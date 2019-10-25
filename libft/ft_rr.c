/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:25:56 by bford             #+#    #+#             */
/*   Updated: 2019/10/25 16:56:20 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print_rr(int *a, int *b, int p)
{
	if (p == 1)
		ft_putstr("rr\n");
	else if (p == 2)
	{
		ft_putstr("\n ______   ______ \n|  __  \\ |  __  \\\n\
| |__| | | |__| |\n|    _/  |    _/\n| |\\ \\   | |\\ \\\n\
|_| \\_\\  |_| \\_\\\n\n");
		ft_print_ab(a, b);
	}
}

int			ft_rr(int *a, int *b, int p)
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
	i = 1;
	copy = b[1];
	while (i < b[0])
	{
		b[i] = b[i + 1];
		i++;
	}
	b[b[0]] = copy;
	ft_print_rr(a, b, p);
	return (1);
}
