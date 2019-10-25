/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:23:30 by bford             #+#    #+#             */
/*   Updated: 2019/10/25 14:38:25 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split_array(int argc, char **argv)
{
	char *s;
	char **array;

	if (!(s = ft_make_arg(argc, argv)) ||
	!(array = ft_strsplit(s, ' ')))
		return (NULL);
	ft_strdel(&s);
	return (array);
}
