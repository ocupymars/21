/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:48:34 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/18 23:33:25 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
		*data_ref, int (*cmp)())
{
	t_list *element;

	element = begin_list;
	while (element)
	{
		if (cmp(element->data, data_ref) == 0)
			f(element->data);
		element = element->next;
	}
}
