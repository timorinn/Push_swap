/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_start.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:32:36 by bford             #+#    #+#             */
/*   Updated: 2019/11/01 13:19:36 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_do_start(int *a, int *b, int p)
{
	int		mm[2];
	int		middle;
	int		half;

	mm[0] = ft_min(a);
	mm[1] = ft_max(a);
	while (a[0] > 51)
	{
		middle = a[ft_find_middle(a)];
		half = a[0] / 2;
		while (half--)
			a[1] >= middle || a[1] == mm[1] || a[1] == mm[0] ?
			ft_ra(a, b, p) : ft_pb(a, b, p);
	}
	while (a[0] > 2)
		a[1] != mm[0] && a[1] != mm[1] ? ft_pb(a, b, p) : ft_ra(a, b, p);
	if (a[2] > a[1] && b[1] < b[b[0]])
		ft_rr(a, b, p);
}
