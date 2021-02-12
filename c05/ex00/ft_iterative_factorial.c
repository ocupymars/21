/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:03:15 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/10 23:43:55 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		result;

	i = 1;
	result = 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return (result);
}
