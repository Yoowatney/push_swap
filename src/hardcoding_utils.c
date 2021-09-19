/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hardcoding_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 22:56:33 by yoyoo             #+#    #+#             */
/*   Updated: 2021/09/18 15:56:11 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_0(t_list *list_a)
{
	int	cnt;

	cnt = 0;
	while (list_a->num != 0)
	{
		cnt++;
		list_a = list_a -> next;
	}
	return (cnt);
}

int	find_1(t_list *list_a)
{
	int	cnt;

	cnt = 0;
	while (list_a->num != 1)
	{
		cnt++;
		list_a = list_a -> next;
	}
	return (cnt);
}

int	ft_abs(int a, int b)
{
	if (a > b)
		return (a - b);
	else
		return (b - a);
}

int	ft_min(int a, int b)
{
	if (a > b)
		return (b);
	return (a);
}
