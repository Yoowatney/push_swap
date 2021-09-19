/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 16:19:06 by yoyoo             #+#    #+#             */
/*   Updated: 2021/09/13 00:20:18 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int num)
{
	t_list	*ret;

	ret = (t_list *)malloc(sizeof(t_list));
	if (!ret)
		return (0);
	ret->num = num;
	ret->next = NULL;
	ret->prev = NULL;
	return (ret);
}
