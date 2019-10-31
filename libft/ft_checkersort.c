/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkersort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:17:47 by bford             #+#    #+#             */
/*   Updated: 2019/10/31 14:01:00 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

static int	ft_del_strbuff(char **s, char **buff)
{
	if (s && *s)
	{
		free(*s);
		*s = NULL;
	}
	if (buff && *buff)
	{
		free(*buff);
		*buff = NULL;
	}
	return (0);
}

int			ft_check_command(char *s, int *a, int *b)
{
	if (!ft_strcmp(s, "sa\n"))
		ft_sa(a, b, 0);
	else if (!ft_strcmp(s, "sb\n"))
		ft_sb(a, b, 0);
	else if (!ft_strcmp(s, "ra\n"))
		ft_ra(a, b, 0);
	else if (!ft_strcmp(s, "rb\n"))
		ft_rb(a, b, 0);
	else if (!ft_strcmp(s, "rra\n"))
		ft_rra(a, b, 0);
	else if (!ft_strcmp(s, "rrb\n"))
		ft_rrb(a, b, 0);
	else if (!ft_strcmp(s, "ss\n"))
		ft_ss(a, b, 0);
	else if (!ft_strcmp(s, "rr\n"))
		ft_rr(a, b, 0);
	else if (!ft_strcmp(s, "rrr\n"))
		ft_rrr(a, b, 0);
	else if (!ft_strcmp(s, "pa\n"))
		ft_pa(a, b, 0);
	else if (!ft_strcmp(s, "pb\n"))
		ft_pb(a, b, 0);
	else
		return (0);
	return (1);
}

static int	ft_do_readstring(int *a, int *b, char **s, char **buff)
{
	*(*(buff) + 1) = '\0';
	if (!(*s))
	{
		if (!(*s = ft_strdup(*buff)))
			return (0);
	}
	else if (!(*s = ft_strjoinfree(*s, *buff)))
		return (0);
	if (**buff == '\n')
	{
		if (!ft_check_command(*s, a, b))
			return (0);
		ft_strdel(s);
	}
	return (1);
}

int			ft_checkersort(int *a, int *b)
{
	char	*buff;
	char	*s;
	int		t;

	if (!(buff = (char *)malloc(sizeof(char) * 2)))
		return (0);
	s = NULL;
	while ((t = read(0, buff, 1)))
	{
		if (!ft_do_readstring(a, b, &s, &buff))
			return (ft_del_strbuff(&s, &buff) + 2);
	}
	if (s)
		return (ft_del_strbuff(&s, &buff) + 2);
	ft_del_strbuff(&s, &buff);
	if (ft_is_sort(a) && !b[0])
		return (1);
	return (0);
}
