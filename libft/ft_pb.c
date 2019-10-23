/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 16:03:33 by bford             #+#    #+#             */
/*   Updated: 2019/10/23 16:17:54 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pb(int *a, int *b)
{
	int		x;

	if (a[0] < 1)
		return (0);
	x = b[0];
	while (x)
	{
		b[x + 1] = b[x];
		x--;
	}
	b[1] = a[1];
	a[0]--;
	b[0]++;
	x = 1;
	while (x <= a[0])
	{
		a[x] = a[x + 1];
		x++;
	}
	a[a[0] + 1] = 666; // D E LE T E !
	ft_putstr("pb\n");
	return (1);
}