/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 01:37:36 by yoyoo             #+#    #+#             */
/*   Updated: 2021/09/19 14:00:30 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"

typedef struct s_data
{
	struct s_data	*prev;
	struct s_data	*next;
	int				number;
}		t_data;

void	is_ascending(t_list **list_a);
void	is_arg_valid(char **temp, int cnt, t_list **list_a);
void	validate(char **argv, t_list **list_a);
void	parsing(char **temp, int cnt, t_list **list_a);

void	ft_error(void);
void	ft_error_valid(char **temp, int cnt, t_list **list_a);

int		find_0(t_list *list_a);
int		find_1(t_list *list_a);
int		ft_abs(int a, int b);
int		ft_min(int a, int b);
void	arg_is_3(t_list **list_a);
void	arg_is_4(t_list **list_a, t_list **list_b);
void	arg_is_5(t_list **list_a, t_list **list_b);

void	copy_value(int **arr, t_list *list_a);
void	ft_swap(int *a, int *b);
int		count_size(t_list *go);
void	selection_sort(int *arr, int size, t_list **list_a);
void	numbering(t_list *list_a, int *arr, int size);
void	radix_sort(t_list **list_a, t_list **list_b);

void	sa(t_list *list_a);
void	sb(t_list *list_a);
void	pa(t_list **list_a, t_list **list_b);
void	pb(t_list **list_a, t_list **list_b);
void	ra(t_list **list_a);
void	rb(t_list **list_a);
void	rra(t_list **list_a);

#endif
