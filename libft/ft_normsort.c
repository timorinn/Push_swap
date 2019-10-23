/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_normsort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:29:45 by bford             #+#    #+#             */
/*   Updated: 2019/10/23 19:33:35 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_minswapb(int size, int i) // мин колво операций для пуша в стеке б
{
	return (i > size / 2 + 1 ? size - i + 1 : i - 1);
}

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
		if (min_swaps < 0)
			min_swaps = ft_minswapb(b[0], i) + ft_minswapa(a, b[i],   elem_a  );
		now = ft_minswapb(b[0], i) + ft_minswapa(a, b[i],  elem_a  );
		if (min_swaps > now)
		{
			min_swaps = now;
			min_b = i;
		}
		i++;
	}
	return(min_b);
}

int		ft_min(int *a)
{
	int i;
	int min;

	min = a[1];
	i = 1;
	while (i <= a[0])
	{
		if (a[i] < min)
			min = a[i];
		i++;
	}
	return (min);
}

int		ft_max(int *a)
{
	int i;
	int max;

	max = a[1];
	i = 1;
	while (i <= a[0])
	{
		if (a[i] > max)
			max = a[i];
		i++;
	}
	return (max);
}

void	ft_do_start(int *a, int *b)
{
	int		minmax[2];

	minmax[0] = ft_min(a);
	minmax[1] = ft_max(a);
	while (a[0] > 2)
		if (a[1] != minmax[0] && a[1] != minmax[1])
			ft_pb(a, b);
		else
			ft_ra(a);
	if (a[0] > 1 && a[1] > a[2])
		ft_sa(a);
}

void	ft_push_element(int *a, int *b)
{
	int elem_b;
	int elem_a;
	int r;
	int r2;

	elem_b = ft_element(a, b, &elem_a);
	//printf("ELEMENT = %d | b[elem] = %d\n", elem_b, b[elem_b]);
	r = ft_minswapb(b[0], elem_b);
	r2 = ft_minswapa(a, b[elem_b], &elem_a);
	//printf("r 1 = %d\n", r);
	//printf("r 2 = %d\n", r2);

	while (r--)
	{
		if (elem_b > b[0] / 2 + 1)
			ft_rrb(b);
		else
			ft_rb(b);
	}
	//printf("r 2 = %d\n", r);
	while (r2--)
	{
		if (elem_a > a[0] / 2 + 1)
			ft_rra(a);
		else
			ft_ra(a);
	}

	ft_pa(a, b);
}

int		ft_normsort(int *a, int *b)
{

	int n;

	n=0;b+=0;

	ft_do_start(a, b);
	//ft_print_ab(a, b);
	
	
	//ft_pa(a,b);ft_sa(a);ft_pa(a,b);ft_sa(a);

	
	//printf("MINSWAP = %d | ELEM_NUM = %d | ELEM = %d\n", ft_minswapa(a, 6, &n), n, a[n]);
	

	
	while (b[0])
	{
		ft_push_element(a, b);
		//ft_print_ab(a, b);
		/*
		if (!scanf("%d", &n))
			break;
		*/
	}
	


	//printf("____________THATS ALL!!!____________\n");


	//ft_print_ab(a, b);

	while (!ft_is_sort(a))
	{
		//ft_print_ab(a, b);
		ft_rra(a);
	}
	//ft_print_ab(a, b);
	// T E S T
	/*
	ft_pa(a, b);
	ft_sa(a);
	ft_pa(a, b);
	ft_sa(a);
	*/
/*
	ft_print_ab(a, b);
	printf("Element = %d\n", ft_element(a, b));
	ft_sa(a);  ft_pa(a, b);
	ft_print_ab(a, b);
	printf("Element = %d\n", ft_element(a, b));
	ft_pa(a, b);
	ft_print_ab(a, b);
	printf("Element = %d\n", ft_element(a, b));
	ft_pa(a, b);
	ft_print_ab(a, b);
	printf("Element = %d\n", ft_element(a, b));
*/
	/*
	printf("minswapA = %d\n", ft_minswapa(a, 1));
	printf("minswapA = %d\n", ft_minswapa(a, 3));
	printf("minswapA = %d\n", ft_minswapa(a, 5));
	printf("minswapA = %d\n", ft_minswapa(a, 7));
	printf("minswapA = %d\n", ft_minswapa(a, 8));
	printf("\n");
	printf("MINSWAP_B = %d\n", ft_minswapb(b, 1));
	printf("MINSWAP_B = %d\n", ft_minswapb(b, 2));
	printf("MINSWAP_B = %d\n", ft_minswapb(b, 3));
	printf("MINSWAP_B = %d\n", ft_minswapb(b, 4));
	*/

	//printf("FT_MIN_SWAP_B = %d\n", ft_minswapb(a, 1));

	return (1);
}