/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:03:10 by bford             #+#    #+#             */
/*   Updated: 2019/10/25 18:53:55 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

int		main(int argc, char **argv)
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
	a = (int *)malloc(sizeof(int) * (i + 1));
	b = (int *)malloc(sizeof(int) * (i + 1));
	if (!a || !b || argc < 2 || !ft_check_arg(i, array) ||
	!ft_make_array(a, b, i, array) || !(ft_checkersort(a, b) == 1))
		ft_putstr("Error\n");
	else
		ft_putstr("OK\n");
	ft_del_array(array);
	free(a);
	free(b);
	return (0);
}
