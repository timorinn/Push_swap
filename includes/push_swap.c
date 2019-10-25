/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:23:05 by bford             #+#    #+#             */
/*   Updated: 2019/10/24 16:28:15 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

#include <stdio.h> // D E L E T E 

/*

int		ft_check_borders(int *a)
{
	int i;
	int j;

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

int		ft_make_array(int *a, int *b, int argc, char **argv)
{
	int i;
	long long int num;

	i = 0;
	a[0] = argc;
	b[0] = 0;
	while (argc--)
	{
		num = ft_atoll(argv[i]);
		if (num > 2147483647 || num < -2147483648)
			return (0);
		a[i + 1] = (int)num;
		b[i + 1] = 666; // D E L E T!
		i++;
	}
	return(ft_check_borders(a));
}

int		ft_check_arg(int argc, char **argv)
{
	int	x;
	int	y;

	y = 0;
	while (argc-- - 1)
	{
		x = 0;
		if (argv[y][x] == '-' || argv[y][x] == '+')
			x++;
		while (argv[y][x] >= '0' && argv[y][x] <= '9')
			x++;
		if (argv[y][x] || x < 1 || !ft_isdigit(argv[y][x - 1]))
			return (0);
		y++;
	}
	return (1);
}

char	*ft_make_arg(int argc, char **argv)
{
	int		i;
	char	*s;

	i = 1;
	s = NULL;
	while (i < argc)
	{
		if (!s)
		{
			if (!(s = ft_strdup(argv[i])) || !(s = ft_strjoinfree(s, " ")))
				return (NULL);
		}
		else if (s && (!(s = ft_strjoinfree(s, argv[i])) ||
		!(s = ft_strjoinfree(s, " "))))
			return (NULL);
		i++;
	}
	return (s);
}

char	**ft_split_array(int argc, char **argv)
{
	char 	*s;
	char 	**array;

	if (!(s = ft_make_arg(argc, argv)) ||
	!(array = ft_strsplit(s, ' ')))
		return (NULL);
	ft_strdel(&s);
	return (array);
}

*/

int		main(int argc, char **argv)
{
	int		*a;
	int		*b;
	char 	**array;
	int 	i;

	i = 0;
	if (!(array = ft_split_array(argc, argv)))
	{
		ft_putstr("Error\n");
		return (0);
	}
	while (array[i])
		i++;
	a = (int *)malloc(sizeof(int) * (i + 1));
	b = (int *)malloc(sizeof(int) * (i + 1));
	if (!a || !b || argc < 2 || !ft_check_arg(i, array) ||
	!ft_make_array(a, b, i, array))
		ft_putstr("Error\n");
	else
		ft_do_sort(a, b);
	ft_del_array(array);
	free (a);
	free (b);
	return (0);
}
