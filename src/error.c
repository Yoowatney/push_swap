/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 22:04:55 by yoyoo             #+#    #+#             */
/*   Updated: 2021/09/19 14:00:06 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error_valid(char **temp, int cnt, t_list **list_a)
{
	while (cnt--)
	{
		free(temp[cnt]);
		temp[cnt] = NULL;
	}
	free(temp);
	ft_lstclear(list_a);
	ft_error();
}

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 1);
	exit(0);
}
