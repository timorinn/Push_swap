/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 18:46:52 by bford             #+#    #+#             */
/*   Updated: 2019/10/13 21:22:33 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_sort(int *a)
{
	int		i;

	i = 1;
	while (i < a[0] && a[i] < a[i + 1])
		i++;
	return (i == a[0] && a[0] ? 1 : 0);
}

int		ft_is_sort_se(int *a, int start, int end)
{
	while (start < end && a[start] < a[start + 1])
		start++;
	return (start == end ? 1 : 0);
}

int		ft_do_sort(int *a, int *b)
{
	int	sort_a;
	int sort_b;

	sort_a = ft_is_sort_se(a, 2, a[0] - 1);
	sort_b = ft_is_sort_se(b, 2, b[0] - 1);

	if (sort_a && a[1] > a[a[0]] && a[a[0]] > a[a[0] - 1])
		sort_b && b[1] > b[b[0]] && b[b[0]] > b[b[0] - 1] ? ft_rr(a, b) : ft_ra(a);
	else if (sort_b && b[1] > b[b[0]] && b[b[0]] > b[b[0] - 1])
		ft_rb(b);
	
	else if (sort_a && a[a[0]] < a[1] && a[1] < a[2])
		sort_b && b[b[0]] < b[1] && b[1] < b[2] ? ft_rrr(a, b) : ft_rra(a);
	else if (sort_b && b[b[0]] < b[1] && b[1] < b[2])
		ft_rrb(b);

	else if (a[1] > a[2])
		b[1] > b[2] ? ft_ss(a, b) : ft_sa(a);
	else if (b[1] > b[2])
		ft_sb(b);


	ft_print_ab(a, b);
	return (1);
}
