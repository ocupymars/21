/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 20:31:43 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/11 22:36:33 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putendl(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1 += 1;
		s2 += 1;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*k;

	i = 1;
	while (i)
	{
		i = 0;
		j = 0;
		while (++j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				k = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = k;
				i = 1;
			}
		}
	}
	j = 0;
	while (++j < argc)
		ft_putendl(argv[j]);
	return (0);
}
