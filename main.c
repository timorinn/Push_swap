/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:23:05 by bford             #+#    #+#             */
/*   Updated: 2019/10/23 12:31:26 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

#include <stdio.h> // D E L E T E 

void	test(int *a, int *b);

int		ft_make_array(int *a, int *b, int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	a[0] = argc - 1;
	b[0] = 0;
	while (argc-- - 1)
	{
		a[i] = ft_atoi(argv[i]);
		b[i] = 666; // D E L E T!
		i++;
	}
	i = 1;
	while (i != a[0])
	{
		j = i + 1;
		while (j <= a[0])
		{
			if (a[i] == a[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_check_arg(int argc, char **argv)
{
	int	x;
	int	y;

	y = 0;
	while (argc-- - 1)
	{
		y++;
		x = 0;
		if (argv[y][x] == '-' || argv[y][x] == '+')
			x++;
		while (argv[y][x] >= '0' && argv[y][x] <= '9')
			x++;
		if (argv[y][x] || x < 1 || !ft_isdigit(argv[y][x - 1]))
			return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		*a;
	int		*b;

	a = (int *)malloc(sizeof(int) * argc);
	b = (int *)malloc(sizeof(int) * argc);
	if (!a || !b || argc < 2 || !ft_check_arg(argc, argv) ||
	!ft_make_array(a, b, argc, argv))
		ft_putstr("Error\n");
	else
		ft_do_sort(a, b);

	//test(a, b);
	free (a);
	free (b);
	return (0);
}
