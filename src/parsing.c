/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 23:01:38 by yoyoo             #+#    #+#             */
/*   Updated: 2021/09/19 13:47:52 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parsing(char **temp, int cnt, t_list **list_a)
{
	int	i;

	i = 0;
	if (*list_a == NULL)
		*list_a = ft_lstnew(ft_atoi(temp[i++]));
	while (i < cnt)
	{
		ft_lstadd_back(list_a, ft_lstnew(ft_atoi(temp[i])));
		i++;
	}
	while (cnt--)
	{
		free(temp[cnt]);
		temp[cnt] = NULL;
	}
	free(temp);
}
