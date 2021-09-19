/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 15:58:45 by yoyoo             #+#    #+#             */
/*   Updated: 2021/09/18 16:08:14 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **list_a)
{
	t_list	*first;
	t_list	*last;

	first = ft_lstnew((*list_a)->num);
	last = ft_lstlast(*list_a);
	ft_lstadd_back(list_a, first);
	*list_a = (*list_a)->next;
	free((*list_a)->prev);
	(*list_a)->prev = NULL;
	last->next = first;
	first->prev = last;
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_list **list_a)
{
	t_list	*last;
	t_list	*first;

	first = ft_lstnew((*list_a)->num);
	last = ft_lstlast(*list_a);
	*list_a = (*list_a)->next;
	free((*list_a)->prev);
	last->next = first;
	first->prev = last;
	ft_putstr_fd("rb\n", 1);
}

void	rra(t_list **list_a)
{
	t_list	*last;

	last = ft_lstlast(*list_a);
	ft_lstadd_front(list_a, ft_lstnew(last->num));
	last->prev->next = NULL;
	last->prev = NULL;
	free(last);
	ft_putstr_fd("rra\n", 1);
}
