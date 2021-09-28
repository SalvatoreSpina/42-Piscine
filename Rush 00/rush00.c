/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:03:24 by sspina            #+#    #+#             */
/*   Updated: 2021/09/12 17:03:39 by sspina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		i;
	int		k;

	i = 1;
	k = y;
	while (k >= 1 && x > 0 && y > 0)
	{
		if ((i == x && k == y) || (i == 1 && k == 1)
			|| (i == x && k == 1) || (i == 1 && k == y))
			ft_putchar('o');
		else if (k == 1 || k == y)
			ft_putchar('-');
		else if (i == 1 || x == i)
			ft_putchar('|');
		else
			ft_putchar(' ');
		if (i == x)
		{
			ft_putchar('\n');
			i = 1;
			k--;
		}
		else
			i++;
	}
}
