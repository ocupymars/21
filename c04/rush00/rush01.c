/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 16:00:27 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/07 21:43:38 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		line;
	int		colum;

	line = 0;
	while (++line <= y && (x > 0 && y > 0))
	{
		colum = 0;
		while (++colum <= x)
		{
			if ((colum == 1 || colum == x) && (line == 1 || line == y))
			{
				if (colum == 1 && line == 1)
					ft_putchar('/');
				else if ((colum == 1 && line == y) || (colum == x && line == 1))
					ft_putchar('\\');
				else if (colum == x && line == y)
					ft_putchar('/');
			}
			else if (colum == 1 || colum == x || line == 1 || line == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
