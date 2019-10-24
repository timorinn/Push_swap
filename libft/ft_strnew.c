/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:23:27 by bford             #+#    #+#             */
/*   Updated: 2019/10/24 13:06:39 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*s;

	i = 0;
	if (!(s = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (i <= size)
		s[i++] = '\0';
	return (s);
}
