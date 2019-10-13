/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:28:53 by bford             #+#    #+#             */
/*   Updated: 2019/10/13 19:17:37 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

# include <stdio.h> // DDD EEE LLL EEE TTT EEE!!!!!!!!!!!!!

int		ft_atoi(const char *s);
size_t	ft_strlen(const char *s);
void	ft_putstr(char const *s);
int		ft_isdigit(int c);
int		ft_sa(int *a);
int		ft_sb(int *b);
int		ft_ss(int *a, int *b);
int		ft_pa(int *a, int *b);
int		ft_pb(int *a, int *b);
int		ft_ra(int *a);
int		ft_rb(int *b);
int		ft_rr(int *a, int *b);
int		ft_rra(int *a);
int		ft_rrb(int *b);
int		ft_rrr(int *a, int *b);

int		ft_do_sort(int *a, int *b);
int		ft_is_sort(int *a);
int		ft_is_sort_se(int *a, int start, int end);

void	ft_print_ab(int *a, int *b); // DELETE

#endif