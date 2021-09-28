/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:36:29 by sspina            #+#    #+#             */
/*   Updated: 2021/09/11 20:42:28 by sspina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	placeholder;
	int	ii;
	int	i;

	i = 0;
	ii = size - 1;
	while (i < (size / 2))
	{
		placeholder = tab[i];
		tab[i] = tab[ii];
		tab[ii] = placeholder;
		i++;
		ii--;
	}
}
