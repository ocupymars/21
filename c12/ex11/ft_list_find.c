/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:53:47 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/18 23:34:38 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *element;

	element = begin_list;
	while (element)
	{
		if (cmp(element->data, data_ref) == 0)
			return (element);
		element = element->next;
	}
	return (0);
}
