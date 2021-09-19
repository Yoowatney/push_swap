/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 01:41:59 by yoyoo             #+#    #+#             */
/*   Updated: 2021/09/19 13:52:53 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	copy_value(int **arr, t_list *list_a)
{
	int	size;
	int	idx;

	idx = 0;
	size = count_size(list_a);
	*arr = malloc(sizeof(int) * size);
	while (list_a != NULL)
	{
		(*arr)[idx] = list_a -> num;
		idx++;
		list_a = list_a -> next;
	}
}

void	selection_sort(int *arr, int size, t_list **list_a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
				ft_swap(&arr[i], &arr[j]);
			else if (arr[i] == arr[j])
			{
				free(arr);
				ft_lstclear(list_a);
				ft_putstr_fd("Error\n", 1);
				exit(0);
			}
			j++;
		}
		i++;
	}
}

void	numbering(t_list *list_a, int *arr, int size)
{
	int	idx;
	int	arr_idx;

	idx = 0;
	arr_idx = 0;
	while (list_a != NULL)
	{
		arr_idx = 0;
		while (arr_idx < size)
		{
			if (arr[arr_idx] == list_a->num)
			{
				ft_swap(&list_a->num, &arr_idx);
				break ;
			}
			arr_idx++;
		}
		list_a = list_a -> next;
	}
	free(arr);
}

int	count_size(t_list *go)
{
	int	size;

	size = 0;
	while (go != NULL)
	{
		go = go -> next;
		size++;
	}
	return (size);
}

void	radix_sort(t_list **list_a, t_list **list_b)
{
	int	size;
	int	max_bit;
	int	i;
	int	j;

	i = 0;
	max_bit = 0;
	size = count_size(*list_a);
	while ((size >> max_bit) != 0)
		++max_bit;
	while (i < max_bit)
	{
		j = 0;
		while (j < size)
		{
			if ((((*list_a)->num >> i) & 1) == 1)
				ra(list_a);
			else
				pb(list_a, list_b);
			j++;
		}
		i++;
		while (*list_b != NULL)
			pa(list_a, list_b);
	}
}
