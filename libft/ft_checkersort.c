/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkersort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:17:47 by bford             #+#    #+#             */
/*   Updated: 2019/10/24 16:59:48 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>

int		ft_check_command(char *s, int *a, int *b)
{
	if (!ft_strcmp(s, "sa\n"))
		ft_sa(a);
	else if (!ft_strcmp(s, "sb\n"))
		ft_sb(b);
	else if (!ft_strcmp(s, "ra\n"))
		ft_ra(a);
	else if (!ft_strcmp(s, "rb\n"))
		ft_rb(b);
	else if (!ft_strcmp(s, "rra\n"))
		ft_rra(a);
	else if (!ft_strcmp(s, "rrb\n"))
		ft_rrb(b);
	else if (!ft_strcmp(s, "ss\n"))
		ft_ss(a, b);
	else if (!ft_strcmp(s, "rr\n"))
		ft_rr(a, b);
	else if (!ft_strcmp(s, "rrr\n"))
		ft_rrr(a, b);
	else if (!ft_strcmp(s, "pa\n"))
		ft_pa(a, b);
	else if (!ft_strcmp(s, "pb\n"))
		ft_pb(a, b);
	else
		return (0);
	return (1);
}

int		ft_checkersort(int *a, int *b)
{
	char	*buff;
	char	*s;
	int		t;

	if (!(buff = (char *)malloc(sizeof(char) * 2)))
		return (0);
	s = NULL;
	while ((t = read(0, buff, 1)))
	{
		buff[1] = '\0';
		if (!s)
		{
			if (!(s = ft_strdup(buff)))
				return (0);
		}
		else if (!(s = ft_strjoinfree(s, buff)))
			return (0);
		if (buff[0] == '\n')
		{
			if (!ft_check_command(s, a, b))
				return (0);
			free(s);
			s = NULL;
		}
	}
	free(buff);
	if (ft_is_sort(a) && !b[0])
		return (1);
	return (0);
}