/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 12:03:10 by bford             #+#    #+#             */
/*   Updated: 2019/10/31 11:51:18 by bford            ###   ########.fr       */
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
	if (argc == 1)
		return (0);
	if (!(array = ft_split_array(argc, argv)))
		return (ft_putstr("Error\n"));
	while (array[i])
		i++;
	if (!i)
		return (ft_all_del(NULL, NULL, array));
	a = (int *)malloc(sizeof(int) * (i + 1));
	b = (int *)malloc(sizeof(int) * (i + 1));
	if (!a || !b || argc < 2 || !ft_check_arg(i, array) ||
	!ft_make_array(a, b, i, array))
		return (ft_all_del(a, b, array) + ft_putstr_fd("Error\n", 2));
	(i = ft_checkersort(a, b)) == 2 ? ft_putstr("Error\n") : 0;
	i == 1 ? ft_putstr("OK\n") : 0;
	i == 0 ? ft_putstr("KO\n") : 0;
	ft_all_del(a, b, array);
	return (0);
}
