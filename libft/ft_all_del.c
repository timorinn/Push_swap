/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_del.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 16:17:28 by bford             #+#    #+#             */
/*   Updated: 2019/10/31 14:08:14 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_all_del(int *a, int *b, char **array)
{
	if (array)
	{
		ft_del_array(array);
		array = NULL;
	}
	if (a)
	{
		free(a);
		a = NULL;
	}
	if (b)
	{
		free(b);
		b = NULL;
	}
	return (0);
}
