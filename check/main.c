/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wlaureen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 22:21:16 by wlaureen          #+#    #+#             */
/*   Updated: 2021/02/08 22:22:42 by wlaureen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int		main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Helloooooo";
	s2 = "Helloo";
	printf("c	: %i\n", strcmp(s1, s2));
}
