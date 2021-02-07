/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 21:19:23 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/06 21:35:45 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_str_is_printable(char *str)
{
	unsigned int		i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 33 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
