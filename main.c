/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:23:05 by bford             #+#    #+#             */
/*   Updated: 2019/10/13 21:22:50 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

#include <stdio.h> // D E L E T E 

void	test(int *a, int *b);

void	ft_make_array(int *a, int *b, int argc, char **argv)
{
	int i;

	i = 1;
	a[0] = argc - 1;
	b[0] = 0;

	while (argc-- - 1)
	{
		a[i] = ft_atoi(argv[i]);
		b[i] = 666; // D E L E T!
		i++;
	}
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
	int		a[argc];
	int		b[argc];

	if (argc < 2 || !ft_check_arg(argc, argv))
	{
		ft_putstr("Error\n");
		return (-1);
	}
	ft_make_array(a, b, argc, argv);
	ft_do_sort(a, b);

	//test(a, b);
	return (0);
}

void	test(int *a, int *b)
{
	printf("1) Start\n");
	ft_print_ab(a, b);

	printf("\n2)				sa\n");
	ft_sa(a);
	ft_print_ab(a, b);

	printf("\n3)				pb pb pb\n");
	ft_pb(a, b); ft_pb(a, b); ft_pb(a, b);
	ft_print_ab(a, b);

	printf("\n4)				ra rb\n");
	ft_ra(a); ft_rb(b);
	ft_print_ab(a, b);

	printf("\n5)				rra rrb\n");
	ft_rra(a); ft_rrb(b);
	ft_print_ab(a, b);

	printf("\n6)				sa\n");
	ft_sa(a);
	ft_print_ab(a, b);

	printf("\n7)				pa pa pa\n");
	ft_pa(a, b); ft_pa(a, b); ft_pa(a, b);
	ft_print_ab(a, b);
	
}