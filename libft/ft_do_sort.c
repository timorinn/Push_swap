/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 18:46:52 by bford             #+#    #+#             */
/*   Updated: 2019/10/14 19:14:20 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_find_middle(int *a)
{
	int		low;
	int		more;
	int 	i;

	low = 0;
	more = 0;
	i = 2;
	while (i <= a[0])
	{
		a[1] < a[i] ? (more++) : (low++);
		i++;
	}
	printf("LOW = %d | MORE = %d\n", low, more);
	return (1);
}


int		ft_is_sort(int *a)
{
	int		i;

	i = 1;
	while (i < a[0] && a[i] < a[i + 1])
		i++;
	return (i == a[0] && a[0] ? 1 : 0);
}

int		ft_is_sort_ase(int *a, int start, int end)
{
	while (start < end && a[start] < a[start + 1])
		start++;
	return (start == end ? 1 : 0);
}

int		ft_is_sort_bse(int *b, int start, int end)
{
	while (start < end && b[start] > b[start + 1])
		start++;
	return (start == end ? 1 : 0);
}

int		ft_do_sort(int *a, int *b)
{
	int	sort_a;
	int sort_b;

	int i = 0;
	while (!ft_is_sort(a) || b[0])
	{
		sort_a = ft_is_sort_ase(a, 2, a[0] - 1);
		sort_b = ft_is_sort_bse(b, 2, b[0] - 1);

		if (/*sort_a &&*/ a[a[0]] < a[1] ) // && a[1] < a[2])
		{
			if (/*sort_b &&*/ b[b[0]] > b[1] ) //&& b[1] > b[2])
			{
				ft_rrr(a, b);
				ft_putstr("rrr\n");
			}
			else
			{
				ft_rra(a);
				ft_putstr("rra\n");
			}
		}
		else if (/*sort_b &&*/ b[b[0]] > b[1] ) //&& b[1] > b[2])
		{
			ft_rrb(b);
			ft_putstr("rrb\n");
		}

		else if (/*sort_a &&*/ a[1] > a[a[0]] ) //&& a[a[0]] > a[a[0] - 1])
		{
			if (/*sort_b &&*/ b[1] < b[b[0]] ) //&& b[b[0]] < b[b[0] - 1])
			{
				ft_rr(a, b);
				ft_putstr("rr\n");
			}
			else
			{
				ft_ra(a);
				ft_putstr("ra\n");
			}
		}
		else if (/*sort_b &&*/ b[1] < b[b[0]] ) //&& b[b[0]] < b[b[0] - 1])
		{
			ft_rb(b);
			ft_putstr("rb\n");
		}

		else if (a[1] > a[2] && a[0] > 1)
		{
			if (b[1] < b[2] && b[0] > 1)
			{
				ft_ss(a, b);
				ft_putstr("ss\n");
			}
			else
			{
				ft_sa(a);
				ft_putstr("sa\n");
			}
		}
		else if (b[1] < b[2] && b[0] > 1)
		{
			ft_sb(b);
			ft_putstr("sb\n");
		}

		else if (!ft_is_sort(a))
		{
			ft_pb(a, b);
			ft_putstr("pb\n");
		}
		else
		{
			ft_pa(a, b);
			ft_putstr("pa\n");
		}
		i++;
		//ft_print_ab(a, b);
	}
	printf("КОЛИЧЕСТВО ОПЕРАЦИЙ = %d\n", i);
	//ft_find_middle(a);


	return (1);
}
