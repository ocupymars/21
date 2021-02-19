/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:59:36 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/17 17:00:07 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_char.h"

void	ft_number_write(int number)
{
	if (number == -2147483648)
	{
		ft_number_write(number / 10);
		ft_char_write('8');
	}
	else if (number < 0)
	{
		ft_char_write('-');
		ft_number_write(-number);
	}
	else
	{
		if (number > 9)
			ft_number_write(number / 10);
		ft_char_write('0' + number % 10);
	}
}
