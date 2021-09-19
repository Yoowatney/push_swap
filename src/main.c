/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 01:39:41 by yoyoo             #+#    #+#             */
/*   Updated: 2021/09/19 13:45:41 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	choice_condition(int size, t_list **list_a, t_list **list_b)
{
	if (size == 2)
		sa(*list_a), exit(0);
	else if (size == 3)
		arg_is_3(list_a);
	else if (size == 4)
		arg_is_4(list_a, list_b);
	else if (size == 5)
		arg_is_5(list_a, list_b);
	else
		radix_sort(list_a, list_b);
}

int	main(int argc, char *argv[])
{
	t_list	*list_a;
	t_list	*list_b;
	int		size;
	int		*arr;

	list_a = NULL;
	list_b = NULL;
	arr = NULL;
	if (argc == 1)
		return (0);
	validate(argv, &list_a);
	copy_value(&arr, list_a);
	size = count_size(list_a);
	is_ascending(&list_a);
	selection_sort(arr, size, &list_a);
	numbering(list_a, arr, size);
	choice_condition(size, &list_a, &list_b);
	ft_lstclear(&list_a);
	ft_lstclear(&list_b);
	exit(0);
}
