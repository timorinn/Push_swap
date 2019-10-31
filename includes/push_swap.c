/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:23:05 by bford             #+#    #+#             */
/*   Updated: 2019/10/31 14:14:33 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

#include <stdio.h>

static int	ft_check_vc(char **array)
{
	int f;
	int i;

	f = 0;
	i = 1;
	if (array[0][0] == '-')
	{
		while (array[0][i])
		{
			if (array[0][i] == 'v')
				f += (!(f % 10) ? 1 : 0);
			else if (array[0][i] == 'c')
				f += (!(f / 10) ? 10 : 0);
			else
				return (0);
			i++;
		}
	}
	return (f);
}

int			main(int argc, char **argv)
{
	int		*a;
	int		*b;
	char	**array;
	int		i;

	i = 0;
	if (argc == 1)
		return (0);
	if (!(array = ft_split_array(argc, argv)))
		return (ft_putstr("Error\n"));
	while (array[i])
		i++;
	i -= (ft_check_vc(array) ? 1 : 0);
	if (!i)
		return (ft_all_del(NULL, NULL, array));
	a = (int *)malloc(sizeof(int) * (i + 1));
	b = (int *)malloc(sizeof(int) * (i + 1));
	if (!a || !b || argc < 2 || !ft_check_arg(i, array + !!ft_check_vc(array))
	|| !ft_make_array(a, b, i, array + !!ft_check_vc(array)))
		return (ft_all_del(a, b, array) + ft_putstr_fd("Error\n", 2));
	ft_do_sort(a, b, ft_check_vc(array));
	ft_all_del(a, b, array);
	return (0);
}
