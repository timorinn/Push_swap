/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_normsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:29:45 by bford             #+#    #+#             */
/*   Updated: 2019/10/27 11:43:02 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_element(int *a, int *b, int *elem_a)
{
	int i;
	int min_swaps;
	int min_b;
	int now;

	min_b = 1;
	min_swaps = -1;
	i = 1;
	while (i <= b[0])
	{
		now = ft_minswapb(b[0], i) + ft_minswapa(a, b[i], elem_a);
		if (min_swaps < 0)
			min_swaps = now;
		if (min_swaps > now)
		{
			min_swaps = now;
			min_b = i;
		}
		i++;
	}
	return (min_b);
}

int		ft_rrr_or_rr(int *a, int *b, int p)
{
	int	elem_a;
	int	elem_b;
	int r;
	int r2;

	elem_b = ft_element(a, b, &elem_a);
	r = ft_minswapb(b[0], elem_b);
	r2 = ft_minswapa(a, b[elem_b], &elem_a);
	r = (r < r2 ? r : r2);
	if (elem_b > b[0] / 2 + 1 && elem_a > a[0] / 2 + 1)
		while (r--)
			ft_rrr(a, b, p);
	else if (elem_b < b[0] / 2 + 1 && elem_a < a[0] / 2 + 1)
		while (r--)
			ft_rr(a, b, p);
	else
		return (0);
	return (1);
}

void	ft_make_r_r2(int *r, int *r2)
{
	if (*r > *r2 && (*r -= *r2))
		*r2 = 0;
	else
	{
		*r2 -= *r;
		*r = 0;
	}
}

void	ft_push_element(int *a, int *b, int p)
{
	int elem_b;
	int elem_a;
	int r;
	int r2;

	elem_b = ft_element(a, b, &elem_a);
	r = ft_minswapb(b[0], elem_b);
	r2 = ft_minswapa(a, b[elem_b], &elem_a);
	if (ft_rrr_or_rr(a, b, p))
		ft_make_r_r2(&r, &r2);
	while (r--)
		if (elem_b > b[0] / 2 + 1)
			ft_rrb(a, b, p);
		else
			ft_rb(a, b, p);
	while (r2--)
		if (elem_a > a[0] / 2 + 1)
			ft_rra(a, b, p);
		else
			ft_ra(a, b, p);
	ft_pa(a, b, p);
}

int		ft_normsort(int *a, int *b, int p)
{
	int	r;
	int	min;
	int	i;

	i = 0;
	ft_do_start(a, b, p);
	while (b[0])
		ft_push_element(a, b, p);
	min = ft_min(a);
	while (a[i] != min)
		i++;
	r = ft_minswapb(a[0], i);
	while (r--)
		if (i > a[0] / 2 + 1)
			ft_rra(a, b, p);
		else
			ft_ra(a, b, p);
	return (1);
}
