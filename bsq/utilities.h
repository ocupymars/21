/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 18:04:30 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/22 18:04:32 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILITIES_H
# define UTILITIES_H

# include "header.h"
# include <stdlib.h>

void	create_grid(int x, int y, int ***grid, int is_aux);
void	free_grid(t_map *map);
int		min(int a, int b, int c);
void	handle_map(t_map *map);
int		ft_atoi(char *str);

#endif
