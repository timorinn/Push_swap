/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 18:46:52 by bford             #+#    #+#             */
/*   Updated: 2019/10/23 16:23:28 by bford            ###   ########.fr       */
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

int		ft_is_sort(int *a)
{
	int		i;

	i = 1;
	while (i < a[0] && a[i] < a[i + 1])
		i++;
	return (i == a[0] && a[0] ? 1 : 0);
}

int		ft_do_sort(int *a, int *b)
{
	//printf("\nКОЛИЧЕСТВО ОПЕРАЦИЙ = %d\n", ft_badsort(a, b));
	printf("Норм сорт ОПЕРАЦИЙ = %d\n", ft_normsort(a, b));
	return (1);
}
