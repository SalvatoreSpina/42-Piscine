/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:39:19 by sspina            #+#    #+#             */
/*   Updated: 2021/09/11 17:40:51 by sspina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	placeholder;

	i = 0;
	while (i < size)
	{
		while (tab[i] > tab[i + 1])
		{
			placeholder = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = placeholder;
			i = 0;
		}
		i++;
	}
}
