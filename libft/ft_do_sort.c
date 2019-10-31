/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 18:46:52 by bford             #+#    #+#             */
/*   Updated: 2019/10/31 18:40:54 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

int		ft_do_sort(int *a, int *b, int p)
{
	p++;
	if (p % 10 == 2)
		ft_print_ab(a, b);
	if (ft_is_sort(a))
		return (1);
	if (a[0] < 4)
		ft_badsort(a, b, p);
	else
		ft_normsort(a, b, p);
	return (1);
}
