/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hardcoding.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 22:54:41 by yoyoo             #+#    #+#             */
/*   Updated: 2021/09/18 17:18:14 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	arg_is_3(t_list **list_a)
{
	int	first;
	int	mid;
	int	last;

	first = (*list_a)->num;
	mid = (*list_a)->next->num;
	last = (*list_a)->next->next->num;
	if (first < last && last < mid)
	{
		sa(*list_a), ra(list_a);
	}
	else if (mid < first && mid < last)
	{
		if (first < last)
			sa(*list_a);
		else
			ra(list_a);
	}
	else if (last < first && first < mid)
		rra(list_a);
	else if (first > mid && mid > last)
	{
		sa(*list_a), rra(list_a);
	}
}

void	arg_is_4(t_list **list_a, t_list **list_b)
{
	int	idx_1;
	int	cnt;

	idx_1 = find_0(*list_a);
	cnt = idx_1;
	while (cnt--)
		ra(list_a);
	pb(list_a, list_b);
	arg_is_3(list_a);
	pa(list_a, list_b);
}

void	arg_is_5(t_list **list_a, t_list **list_b)
{
	int	idx_1;
	int	idx_2;
	int	cnt;

	idx_1 = find_0(*list_a);
	idx_2 = find_1(*list_a);
	cnt = ft_min(idx_1, idx_2);
	while (cnt--)
		ra(list_a);
	pb(list_a, list_b);
	cnt = ft_abs(idx_1, idx_2);
	while (--cnt)
		ra(list_a);
	pb(list_a, list_b);
	if ((*list_b)->num == 0)
		sb(*list_b);
	arg_is_3(list_a);
	pa(list_a, list_b);
	pa(list_a, list_b);
}
