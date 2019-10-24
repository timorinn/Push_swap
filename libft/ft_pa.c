/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 16:46:13 by bford             #+#    #+#             */
/*   Updated: 2019/10/23 22:34:46 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pa(int *a, int *b)
{
	int		x;

	if (b[0] < 1)
		return (0);
	x = a[0];
	while (x)
	{
		a[x + 1] = a[x];
		x--;
	}
	a[1] = b[1];
	b[0]--;
	a[0]++;
	x = 1;
	while (x <= b[0])
	{
		b[x] = b[x + 1];
		x++;
	}
	b[b[0] + 1] = 666; // D E LE T E !
	ft_putstr("pa\n");
	return (1);
}