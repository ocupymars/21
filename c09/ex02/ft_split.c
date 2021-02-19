/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 22:15:24 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/14 23:01:57 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_find_sep(char c, char *charset)
{
	int		i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int		ft_count_numb_of_word(char *str, char *charset)
{
	int		i;
	int		words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((ft_find_sep(str[i + 1], charset) == 1 &&
			ft_find_sep(str[i], charset) == 0))
			words++;
		i++;
	}
	return (words);
}

void	ft_copy_word(char *dest, char *from, char *charset)
{
	int		i;

	i = 0;
	while (ft_find_sep(from[i], charset) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_transfer_to_tab(char **tab, char *str, char *charset)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] == '\0')
	{
		if (ft_find_sep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (ft_find_sep(str[i + j], charset) == 0)
				j++;
			tab[word] = (char*)malloc(sizeof(char) * (j + 1));
			ft_copy_word(tab[word], str + i, charset);
			i = i + j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		word;

	word = ft_count_numb_of_word(str, charset);
	if ((tab = (char**)malloc(sizeof(char*) * (word + 1))) == NULL)
		return (NULL);
	tab[word] = 0;
	ft_transfer_to_tab(tab, str, charset);
	return (tab);
}
