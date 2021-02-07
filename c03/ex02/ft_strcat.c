/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 19:44:38 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/07 22:58:07 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int		i;
	unsigned int		j;

	i = 0;
	while (src[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\n';
	return (dest);
}
