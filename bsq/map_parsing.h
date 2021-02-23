/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parsing.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 18:03:51 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/22 18:03:54 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_PARSING_H
# define MAP_PARSING_H

# include "header.h"
# include "grid_parsing.h"
# include "utilities.h"
# include <stdlib.h>

int		handle_first_line(char buffer[FIRST_LINE_BUFFER], t_map *map);
int		parse_first_line(int fd, t_map *map);
int		read_file(char *file, t_map *map);
t_map	*map_parse(char *file);
t_map	*map_parse_stdin(void);

#endif
