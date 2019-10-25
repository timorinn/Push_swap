/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_badsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 17:00:23 by bford             #+#    #+#             */
/*   Updated: 2019/10/24 17:49:33 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_find_middle(int *a)
{
	int	n;
	int y;
	int x;

	y = 1;
	while (y <= a[0])
	{
		x = 1;
		n = a[0] / 2 + 1;
		while (x <= a[0])
		{
			if (a[y] >= a[x])
				n--;
			x++;
		}
		if (n == 0)
			return (y);
		y++;
	}
	return (0);
}

int		ft_badsort(int *a, int *b)
{
	int i;
	int	m_a;
	int m_b;
	
	i = 0;

	while (!ft_is_sort(a) || b[0])
	{
		m_a = a[ft_find_middle(a)];
		m_b = b[ft_find_middle(b)];

		if (ft_little_sort(a, b))
			i++;
		if (!ft_is_sort(a) && a[0] > 3)
			ft_do_job(a, b, m_a, &i);
		else
			while (b[0])
			{
				ft_pa(a, b, 1);
				i += ft_little_sort(a, b);
				i++;
			}
	}
	return (i);
}