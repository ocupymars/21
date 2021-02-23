/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:11:00 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/22 17:11:05 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>
# include <unistd.h>
# define FIRST_LINE_BUFFER 200
# define PRINT_LINE_NB 10
# define X_BUFFER 50000

typedef struct	s_map
{
	int		x;
	int		y;
	int		**grid;
	int		**grid_copy;
	char	empty;
	char	obst;
	char	full;
}				t_map;
int				check_lines(char *file, t_map *map);
void			process_map(t_map *map);
void			ft_putstr(int channel, char *str);

#endif
