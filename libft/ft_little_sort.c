/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_little_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 16:29:10 by bford             #+#    #+#             */
/*   Updated: 2019/10/24 17:50:03 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_little_sort(int *a, int *b)
{
	int m_a;
	int m_b;

	m_a = a[ft_find_middle(a)];
	m_b = b[ft_find_middle(b)];
	if (a[0] > 1 /* && a[a[0]] < a[1] */ && a[a[0]] <= m_a && a[1] <= m_a &&
	b[0] > 1 /* && b[b[0]] > b[1] */ && b[b[0]] >= m_b && b[1] >= m_b)
		ft_rrr(a, b, 1);
	else if (a[0] > 1 && a[a[0]] < a[1] && a[a[0]] < m_a && a[1] >= m_a &&
	b[0] > 1 && b[b[0]] > b[1] && b[b[0]] >= m_b && b[1] <= m_b)
		ft_rr(a, b, 1);
	else if (a[0] > 1  /* && a[a[0]] < a[1] */ && a[a[0]] <= m_a && a[1] <= m_a)
		ft_rra(a, 1);
	else if (a[0] > 1 && a[a[0]] < a[1] && a[a[0]] <= m_a && a[1] > m_a)
		ft_ra(a, 1);
	else if (b[0] > 1 /* && b[b[0]] > b[1] */ && b[b[0]] >= m_b && b[1] >= m_b)
		ft_rrb(b, 1);
	else if (b[0] > 1 && b[b[0]] > b[1] && b[b[0]] >= m_b && b[1] < m_b)
		ft_rb(b, 1);
	else if (a[0] > 1 && b[0] > 1 && a[1] > a[2] && b[1] < b[2])
		ft_ss(a, b, 1);
	else if (a[0] > 1 && a[1] > a[2])
		ft_sa(a, 1);
	else if (b[0] > 1 && b[1] < b[2])
		ft_sb(b, 1);
	else
		return (0);
	return (1);
}