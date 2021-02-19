/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:36:52 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/18 23:27:51 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front2(t_list **list, void *data)
{
	t_list *elem;

	elem = ft_create_elem(data);
	if (*list)
		elem->next = *list;
	*list = elem;
}

t_list			*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*begin;

	begin = 0;
	i = 0;
	while (i < size)
		ft_list_push_front2(&begin, strs[i++]);
	return (begin);
}
