/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 16:25:44 by bford             #+#    #+#             */
/*   Updated: 2019/10/30 14:17:06 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_print_ab(int *a, int *b)
{
	int i;

	i = 1;
	ft_putstr("_ _ ___Array A___ _ _\n");
	while (i <= a[0])
	{
		ft_putnbr(a[i]);
		write(1, " ", 1);
		i++;
	}
	ft_putstr("\n_ _ ___Array B___ _ _\n");
	if (!b[0])
		ft_putstr("NO ELEMENTS!\n");
	i = 1;
	while (i <= b[0])
	{
		ft_putnbr(b[i]);
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}
