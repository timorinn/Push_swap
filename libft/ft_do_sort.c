/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 18:46:52 by bford             #+#    #+#             */
/*   Updated: 2019/10/30 12:03:18 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_do_sort(int *a, int *b, int p)
{
	p++;
	if (ft_is_sort(a))
		return (1);
	if (p == 2)
		ft_print_ab(a, b);
	if (a[0] < 8)
		ft_badsort(a, b, p);
	else
		ft_normsort(a, b, p);
	return (1);
}
