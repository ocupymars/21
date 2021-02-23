/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:11:53 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/22 17:11:56 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utilities.h"

int		ft_atoi(char *str)
{
	int		i;
	int		nbr;
	int		znak;

	nbr = 0;
	znak = 1;
	i = 0;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') ||
			(str[i] == '\f') || (str[i] == '\r') || (str[i] == ' '))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			znak *= -1;
	}
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr *= 10;
		nbr += (int)str[i] - '0';
		i++;
	}
	if (znak == -1)
		return (-nbr);
	else
		return (nbr);
}

void	create_grid(int x, int y, int ***grid, int is_aux)
{
	int i;
	int j;

	i = 0;
	*grid = malloc(sizeof(int*) * x);
	while (i < x)
	{
		(*grid)[i] = malloc(sizeof(int) * y);
		i++;
	}
	i = 0;
	j = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			(*grid)[i][j] = is_aux;
			j++;
		}
		i++;
	}
}

void	free_grid(t_map *map)
{
	int i;

	i = 0;
	while (i < (map->x))
	{
		free(map->grid[i]);
		free(map->grid_copy[i++]);
	}
	free(map->grid);
	free(map->grid_copy);
}

int		min(int a, int b, int c)
{
	int m;

	m = a;
	if (m > b)
		m = b;
	if (m > c)
		m = c;
	return (m);
}

void	handle_map(t_map *map)
{
	if (!map)
	{
		ft_putstr(2, "map error\n");
	}
	else
	{
		process_map(map);
	}
}
