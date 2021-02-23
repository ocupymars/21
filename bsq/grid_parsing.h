/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_parsing.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:18:33 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/22 17:18:45 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRID_PARSING_H
# define GRID_PARSING_H

# include "header.h"
# include "utilities.h"
# include <stdlib.h>

int		fill_row(char buffer[X_BUFFER], t_map *map, int y);
int		parse_first_grid_line(int fd, t_map *map);
int		parse_body_grid(int fd, t_map *map);
int		parse_grid(int fd, t_map *map);

#endif
