/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:36:10 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/18 23:20:46 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;
t_list			*ft_create_elem(void *data);
void	ft_list_push_back(t_list **begin_list, void *data);

#endif
