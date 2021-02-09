/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:08:20 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/09 21:59:49 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
