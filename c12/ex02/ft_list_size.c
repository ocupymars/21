/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:27:42 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/18 23:09:51 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*current;
	int		index;

	index = 0;
	current = begin_list;
	while (current)
	{
		index++;
		current = current->next;
	}
	return (index);
}
