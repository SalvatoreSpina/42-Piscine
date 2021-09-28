/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:44:38 by sspina            #+#    #+#             */
/*   Updated: 2021/09/19 15:10:37 by sspina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_create_tab(char *str, int size)
{
	char	**tab;
	int		x;
	int		y;

	tab = malloc(size * sizeof(char *));
	if (!(tab))
		return (NULL);
	y = -1;
	while (++y < size)
	{
		tab[y] = malloc((size + 4) * sizeof(char));
		if (!(tab[y]))
			return (NULL);
		x = -1;
		while (++x < size)
			tab[y][x] = 0;
		x = -1;
		while (++x < 4)
			tab[y][size + x] = str[2 * (y + x * size)] - '0';
	}
	return (tab);
}
