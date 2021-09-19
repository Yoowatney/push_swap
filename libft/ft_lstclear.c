/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 22:30:24 by yoyoo             #+#    #+#             */
/*   Updated: 2021/09/14 14:50:03 by yoyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
/*void	ft_lstclear(t_list **lst, void (*del)(void *))*/
void	ft_lstclear(t_list **lst)
{
	t_list	*ptr;

	if (!*lst)
		return ;
	while (*lst != NULL)
	{
		ptr = *lst;
		*lst = (*lst)->next;
		free(ptr);
	}
}
