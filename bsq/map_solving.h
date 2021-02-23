/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_solving.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 18:04:18 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/22 18:04:20 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_SOLVING_H
# define MAP_SOLVING_H

# include "header.h"
# include "utilities.h"
# include <stdlib.h>

void	fill_first_lines(t_map *map);
void	compute_auxiliary(t_map *map);
void	biggest_square(t_map *map, int *top_i, int *left_i, int *size);
void	fill_grid_square(int ***grid, int x, int y, int size);

#endif
