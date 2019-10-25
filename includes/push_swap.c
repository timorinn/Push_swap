/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:23:05 by bford             #+#    #+#             */
/*   Updated: 2019/10/25 20:58:31 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

static int	ft_check_v(char **array)
{
	if (!ft_strcmp(array[0], "-v"))
		return (1);
	return (0);
}

int			main(int argc, char **argv)
{
	int		*a;
	int		*b;
	char	**array;
	int		i;

	i = 0;
	if (!(array = ft_split_array(argc, argv)))
	{
		ft_putstr("Error\n");
		return (0);
	}
	while (array[i])
		i++;
	i -= ft_check_v(array);
	a = (int *)malloc(sizeof(int) * (i + 1));
	b = (int *)malloc(sizeof(int) * (i + 1));
	if (!a || !b || argc < 2 || !ft_check_arg(i, array + ft_check_v(array)) ||
	!ft_make_array(a, b, i, array + ft_check_v(array)))
		ft_putstr("Error\n");
	else
		ft_do_sort(a, b, ft_check_v(array));
	ft_del_array(array);
	free(a);
	free(b);
	return (0);
}
