/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minswapa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 10:47:52 by bford             #+#    #+#             */
/*   Updated: 2019/10/27 10:48:06 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_minswapa(int *a, int n, int *elem_a)
{
	int x;

	x = 1;
	while (x < a[0])
	{
		if (a[x] < n && n < a[x + 1])
		{
			*elem_a = x + 1;
			return (ft_minswapb(a[0], x + 1));
		}
		x++;
	}
	*elem_a = 1;
	return (ft_minswapb(a[0], 1));
}
