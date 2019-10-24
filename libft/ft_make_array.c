/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:25:23 by bford             #+#    #+#             */
/*   Updated: 2019/10/24 16:25:33 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
