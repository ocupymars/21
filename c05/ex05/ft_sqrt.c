/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 23:21:52 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/10 23:36:10 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		i;

	i = 0;
	if (i == -2147483648)
		return (0);
	if (i < 0)
		nb = -nb;
	while (i <= 46438 && (1 * 1) < nb)
		i++;
	if ((i * i) == nb)
		return (1);
	else
		return (0);
}