/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_job.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 14:58:36 by bford             #+#    #+#             */
/*   Updated: 2019/10/24 17:50:21 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_do_job(int *a, int *b, int middle, int *all)
{
	int i;

	i = a[0] / 2;
	while (i)
	{
		if (a[1] >= middle)
			ft_ra(a, 1);
		else
		{
			i--;
			ft_pb(a, b, 1);
			(*all) += ft_little_sort(a, b);
		}
		(*all)++;
	}
}