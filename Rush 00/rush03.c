/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:19:22 by sspina            #+#    #+#             */
/*   Updated: 2021/09/12 14:20:31 by sspina           ###   ########.fr       */
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
		if (i == x && x != 1 && (k == 1 || k == y))
			ft_putchar('C');
		else if (i == 1 && (k == 1 || k == y))
			ft_putchar('A');
		else if (i == 1 || i == x || k == 1 || k == y)
			ft_putchar('B');
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
