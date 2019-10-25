/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_little_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 16:29:10 by bford             #+#    #+#             */
/*   Updated: 2019/10/25 19:30:15 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_maybe_rr(int *a, int *b, int m_a, int m_b)
{
	if (a[0] > 1 && a[a[0]] < a[1] && a[a[0]] < m_a && a[1] >= m_a &&
	b[0] > 1 && b[b[0]] > b[1] && b[b[0]] >= m_b && b[1] <= m_b)
		return (1);
	return (0);
}

static int	ft_maybe_rrr(int *a, int *b, int m_a, int m_b)
{
	if (a[0] > 1 && a[a[0]] <= m_a && a[1] <= m_a &&
	b[0] > 1 && b[b[0]] >= m_b && b[1] >= m_b)
		return (1);
	return (0);
}

int			ft_little_sort(int *a, int *b, int p)
{
	int m_a;
	int m_b;

	m_a = a[ft_find_middle(a)];
	m_b = b[ft_find_middle(b)];
	if (ft_maybe_rrr(a, b, m_a, m_b))
		return (ft_rrr(a, b, p));
	else if (ft_maybe_rr(a, b, m_a, m_b))
		return (ft_rr(a, b, p));
	else if (a[0] > 1 && a[a[0]] <= m_a && a[1] <= m_a)
		return (ft_rra(a, b, p));
	else if (a[0] > 1 && a[a[0]] < a[1] && a[a[0]] <= m_a && a[1] > m_a)
		return (ft_ra(a, b, p));
	else if (b[0] > 1 && b[b[0]] >= m_b && b[1] >= m_b)
		return (ft_rrb(a, b, p));
	else if (b[0] > 1 && b[b[0]] > b[1] && b[b[0]] >= m_b && b[1] < m_b)
		return (ft_rb(a, b, p));
	else if (a[0] > 1 && b[0] > 1 && a[1] > a[2] && b[1] < b[2])
		return (ft_ss(a, b, p));
	else if (a[0] > 1 && a[1] > a[2])
		return (ft_sa(a, b, p));
	else if (b[0] > 1 && b[1] < b[2])
		return (ft_sb(a, b, p));
	return (0);
}
