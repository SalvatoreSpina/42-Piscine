/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:47:10 by sspina            #+#    #+#             */
/*   Updated: 2021/09/19 14:48:36 by sspina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pick_xy(delta, size)
{
	if (delta > 0)
		return (0);
	else
		return (size - 1);
}

int	ft_max(delta, size)
{
	if (delta > 0)
		return (size);
	else
		return (-1);
}

int	ft_height_col(char **tab, int x, int delta, int size)
{
	int	y;
	int	max;
	int	visual;
	int	height;

	y = ft_pick_xy(delta, size);
	max = ft_max(delta, size);
	visual = 0;
	height = 0;
	while (y != max)
	{
		if (!tab[y][x])
			return (0);
		if (tab[y][x] > visual)
		{
			visual = tab[y][x];
			height++;
		}
		y += delta;
	}
	return (height);
}

int	ft_height_row(char **tab, int y, int delta, int size)
{
	int	x;
	int	max;
	int	visual;
	int	height;

	x = ft_pick_xy(delta, size);
	max = ft_max(delta, size);
	visual = 0;
	height = 0;
	while (x != max)
	{
		if (tab[y][x] > visual)
		{
			visual = tab[y][x];
			height++;
		}
		x += delta;
	}
	return (height);
}

int	ft_is_duplicate(char **tab, int x, int y, int size)
{
	int	i;

	if (!tab[y][x])
		return (0);
	i = y;
	while (i--)
		if (tab[y][x] == tab[i][x])
			return (1);
	i = y;
	while (++i < size)
		if (tab[y][x] == tab[i][x])
			return (1);
	i = x;
	while (i--)
		if (tab[y][x] == tab[y][i])
			return (1);
	i = x;
	while (++i < size)
		if (tab[y][x] == tab[y][i])
			return (1);
	return (0);
}
