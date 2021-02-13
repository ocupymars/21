/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 21:50:31 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/12 23:29:11 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		range;
	int		index;
	int		*buffer;

	if (min >= max)
		return (0);
	range = max - min - 1;
	if ((buffer = malloc(range * sizeof(int))) == NULL)
		return (0);
	index = 0;
	while (index <= range)
	{
		buffer[index] = min + index;
		index++;
	}
	return (buffer);
}
