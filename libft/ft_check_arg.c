/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:24:49 by bford             #+#    #+#             */
/*   Updated: 2019/10/24 16:24:59 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
