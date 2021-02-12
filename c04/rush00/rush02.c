/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:17:06 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/07 18:17:40 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int		line;
	int		column;

	line = 0;
	while (++line <= y && (x > 0 && y > 0))
	{
		column = 0;
		while (++column <= x)
		{
			if (line == 1 || line == y)
			{
				if (column == 1)
					ft_putchar('A');
				else if (column == y)
					ft_putchar('C');
				else
					ft_putchar('B');
			}
			else if (column == 1 || column == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
