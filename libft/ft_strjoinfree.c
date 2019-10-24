/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:17:30 by bford             #+#    #+#             */
/*   Updated: 2019/10/24 14:33:20 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strjoinfree(char *s1, char const *s2)
{
	char *fresh;
	char *copy;
	char *copy2;

	if (!s1 || !s2 || !(fresh = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	copy = fresh;
	copy2 = s1;
	while (*s1)
		*fresh++ = *s1++;
	free(copy2);
	while (*s2)
		*fresh++ = *s2++;
	return (copy);
}
