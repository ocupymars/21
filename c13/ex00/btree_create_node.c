/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 20:34:14 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/19 22:04:04 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree			*btree_create_node(void *item)
{
	t_btree			*element;

	if (!(element = malloc(sizeof(t_btree))))
		return (0);
	element->left = 0;
	element->right = 0;
	element->item = item;
	return (element);
}
