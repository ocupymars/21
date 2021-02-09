/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 23:27:44 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/09 16:06:35 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

/*ex00
int		ft_strlen(char *str);

int		main(void)
{
	char	*str;

	str = "Hello ";
	printf("%d\n",	ft_strlen(str));
}*/

/*ex01

void    ft_putchar(char c)
{
     write(1, &c, 1);
}

int		main(void)
{
	char	*str;

	str = "beachesaintloyal ";
	printf("%s\n", str);
}*/

/*ex02

void	ft_putchar(char c);

void	ft_putnbr(int nb);

int		main(void)
{
	ft_putnbr(42);
	ft_putchar('\n');	
	ft_putnbr(4242);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
}*/

/*ex03
int		ft_atoi(char *str);

int		main(void)
{
	char	*str;

	str =  "  ---+--+1234ab567";
	printf("%d\n", ft_atoi(str));
}*/

//ex04
int		main(void)
{

	int kay[] = {0123456789};
	printf("c [] : %d\n", kay);
}