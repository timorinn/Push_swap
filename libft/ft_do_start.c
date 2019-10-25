/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_start.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:32:36 by bford             #+#    #+#             */
/*   Updated: 2019/10/25 18:32:49 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_do_start(int *a, int *b, int p)
{
	int		minmax[2];

	minmax[0] = ft_min(a);
	minmax[1] = ft_max(a);
	while (a[0] > 2)
		if (a[1] != minmax[0] && a[1] != minmax[1])
			ft_pb(a, b, p);
		else
			ft_ra(a, b, p);
	if (a[0] > 1 && a[1] > a[2])
		ft_sa(a, b, p);
}
