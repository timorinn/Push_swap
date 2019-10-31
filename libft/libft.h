/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bford <bford@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:28:53 by bford             #+#    #+#             */
/*   Updated: 2019/10/31 11:50:06 by bford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

long long int	ft_atoll(const char *s);
size_t			ft_strlen(const char *s);
int				ft_putstr_fd(char const *s, int fd);
int				ft_putstr(char const *s);
int				ft_isdigit(int c);
int				ft_sa(int *a, int *b, int p);
int				ft_sb(int *a, int *b, int p);
int				ft_ss(int *a, int *b, int p);
int				ft_pa(int *a, int *b, int p);
int				ft_pb(int *a, int *b, int p);
int				ft_ra(int *a, int *b, int p);
int				ft_rb(int *a, int *b, int p);
int				ft_rr(int *a, int *b, int p);
int				ft_rra(int *a, int *b, int p);
int				ft_rrb(int *a, int *b, int p);
int				ft_rrr(int *a, int *b, int p);

int				ft_do_sort(int *a, int *b, int p);
int				ft_is_sort(int *a);
int				ft_is_sort_se(int *a, int start, int end);

void			ft_print_ab(int *a, int *b);

void			ft_do_job(int *a, int *b, int middle, int p);
int				ft_little_sort(int *a, int *b, int p);
int				ft_find_middle(int *a);

int				ft_check_borders(int *a);
char			*ft_make_arg(int argc, char **argv);

int				ft_badsort(int *a, int *b, int p);
int				ft_normsort(int *a, int *b, int p);
char			**ft_split_array(int argc, char **argv);
int				ft_check_arg(int argc, char **argv);
int				ft_make_array(int *a, int *b, int argc, char **argv);

char			**ft_strsplit(char const *s, char c);
char			*ft_strnew(size_t size);
char			*ft_strncpy(char *s1, const char *s2, size_t n);
void			ft_del_array(char **array);
char			*ft_strjoinfree(char *s1, char const *s2);
char			*ft_strdup(char const *src);
void			ft_strdel(char **as);
int				ft_checkersort(int *a, int *b);

int				ft_strcmp(const char *s1, const char *s2);
void			ft_putnbr(int n);
void			ft_putchar(char c);
int				ft_min(int *a);
int				ft_max(int *a);
void			ft_do_start(int *a, int *b, int p);
int				ft_minswapa(int *a, int n, int *elem_a);
int				ft_minswapb(int size, int i);
int				ft_all_del(int *a, int *b, char **array);

#endif
