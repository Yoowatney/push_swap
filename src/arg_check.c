/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 01:49:26 by yoyoo             #+#    #+#             */
/*   Updated: 2021/09/19 14:05:57 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_ascending(t_list **head)
{
	t_list	*list_a;

	list_a = *head;
	while (list_a->next != NULL)
	{
		if ((list_a -> num) > (list_a -> next -> num))
			return ;
		list_a = list_a -> next;
	}
	ft_lstclear(head);
	exit(0);
}

void	is_arg_valid_sub(char *num, char **temp, t_list **list_a, int cnt)
{
	if (ft_strlen(num) > 11)
	{
		ft_error_valid(temp, cnt, list_a);
	}
	if (ft_atoi(num) < -2147483648)
	{
		ft_error_valid(temp, cnt, list_a);
	}
}

void	is_arg_valid(char **temp, int cnt, t_list **list_a)
{
	int	i;
	int	j;
	int	len;

	i = -1;
	while (++i < cnt)
	{
		len = ft_strlen(temp[i]);
		j = -1;
		while (++j < len)
		{
			if ((j == 0) && (temp[i][j] == '-' || temp[i][j] == '+'))
			{
				j++;
				continue ;
			}
			if (!ft_isdigit(temp[i][j]))
				ft_error_valid(temp, cnt, list_a);
			else if (temp[i][0] == '-')
				is_arg_valid_sub(temp[i], temp, list_a, cnt);
			else
				if ((ft_strlen(temp[i]) > 11) || ft_atoi(temp[i]) > 2147483647)
					ft_error_valid(temp, cnt, list_a);
		}
	}
}

int	count_arg(char **temp)
{
	int	ret;

	ret = 0;
	while (*temp != NULL)
	{
		ret++;
		temp++;
	}
	return (ret);
}

void	validate(char **argv, t_list **list_a)
{
	int		i;
	int		cnt;
	char	**temp;

	i = 1;
	while (argv[i])
	{
		cnt = 0;
		if (ft_strlen(argv[i]) > 1)
		{
			temp = ft_split(argv[i], ' ');
			cnt = count_arg(temp);
			is_arg_valid(temp, cnt, list_a);
		}
		else if (ft_strlen(argv[i]) == 0)
			ft_lstclear(list_a), ft_error();
		else
		{
			if (!ft_isdigit(argv[i][0]))
				ft_lstclear(list_a), ft_error();
			temp = (char **)malloc(sizeof(char *) * 1);
			temp[0] = ft_strdup(argv[i]), cnt++;
		}
		parsing(temp, cnt, list_a), i++;
	}
}
