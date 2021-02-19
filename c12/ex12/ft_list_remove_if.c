/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:54:59 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/18 23:35:45 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
		int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*tmp;
	t_list	*element;

	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free_fct(tmp->data);
		free(tmp);
	}
	element = *begin_list;
	while (element && element->next)
	{
		if (cmp(element->next->data, data_ref) == 0)
		{
			tmp = element->next;
			element->next = tmp->next;
			free_fct(tmp->data);
			free(tmp);
		}
		element = element->next;
	}
}
