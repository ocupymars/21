/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 20:44:25 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/19 21:41:15 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H
# include <stdlib.h>

typedef struct				s_btree
{
	struct s_btree			*left;
	struct s_btree			*right;
	void					*item;
}							t_btree;
t_btree						*btree_create_node(void *item);
#endif
