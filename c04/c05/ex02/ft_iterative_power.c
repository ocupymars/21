/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 21:37:21 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/10 22:16:51 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	while (power-- > 0)
		i *= nb;
	return (i);
}
