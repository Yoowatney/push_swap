/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 15:56:31 by yoyoo             #+#    #+#             */
/*   Updated: 2021/09/18 16:04:50 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	sa(t_list *list_a)
{
	if (list_a == NULL || (list_a->next) == NULL)
		return ;
	ft_swap(&list_a->num, &(list_a->next)->num);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_list *list_a)
{
	if (list_a == NULL || (list_a->next) == NULL)
		return ;
	ft_swap(&list_a->num, &(list_a->next)->num);
	ft_putstr_fd("sb\n", 1);
}

void	pa(t_list **list_a, t_list **list_b)
{
	ft_lstadd_front(list_a, ft_lstnew((*list_b)->num));
	if ((*list_b)->next != NULL)
	{
		*list_b = (*list_b)->next;
		free((*list_b)->prev);
		(*list_b)->prev = NULL;
	}
	else
	{
		free(*list_b);
		*list_b = NULL;
	}
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_list **list_a, t_list **list_b)
{
	ft_lstadd_front(list_b, ft_lstnew((*list_a)->num));
	if ((*list_a)->next != NULL)
	{
		*list_a = (*list_a)->next;
		free((*list_a)->prev);
		(*list_a)->prev = NULL;
	}
	else
	{
		free(*list_a);
		*list_a = NULL;
	}
	ft_putstr_fd("pb\n", 1);
}

/*void	ra(t_list **list_a)
 *{
 *    ft_lstadd_back(list_a, ft_lstnew((*list_a)->num));
 *    *list_a = (*list_a)->next;
 *    free((*list_a)->prev);
 *
 *    t_list *first;
 *    t_list *last;
 *    
 *    first = ft_lstnew((*list_a)->num);
 *    last = ft_lstlast(*list_a);
 *    ft_lstadd_back(list_a, first);
 *    *list_a = (*list_a)->next;
 *    free((*list_a)->prev);
 *    (*list_a)->prev = NULL;
 *    last->next = first;
 *    first->prev = last;
 *    ft_putstr_fd("ra\n", 1);
 *}
 *
 *void	rb(t_list **list_a)
 *{
 *    t_list *last;
 *    t_list *first;
 *    
 *    first = ft_lstnew((*list_a)->num);
 *    last = ft_lstlast(*list_a);
 *    *list_a = (*list_a)->next;
 *    free((*list_a)->prev);
 *    last->next = first;
 *    first->prev = last;
 *    ft_putstr_fd("rb\n", 1);
 *}
 *
 *void	rra(t_list **list_a)
 *{
 *    t_list *last = ft_lstlast(*list_a);
 *    ft_lstadd_front(list_a, ft_lstnew(last->num));
 *    last->prev->next = NULL;
 *    last->prev = NULL;
 *    free(last);
 *    ft_putstr_fd("rra\n", 1);
 *}*/
