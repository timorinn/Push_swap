/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:24:06 by bford             #+#    #+#             */
/*   Updated: 2019/10/25 14:43:09 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_make_arg(int argc, char **argv)
{
	int		i;
	char	*s;

	i = 1;
	s = NULL;
	while (i < argc)
	{
		if (!s)
		{
			if (!(s = ft_strdup(argv[i])))
				return (NULL);
			if (!(s = ft_strjoinfree(s, " ")))
				return (NULL);
		}
		else if (s && (!(s = ft_strjoinfree(s, argv[i])) ||
		!(s = ft_strjoinfree(s, " "))))
			return (NULL);
		i++;
	}
	return (s);
}
