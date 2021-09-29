/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 04:41:52 by sspina            #+#    #+#             */
/*   Updated: 2021/09/26 08:15:18 by sspina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	n;
	int	*counter;
	
	n = 0;
	counter = malloc(sizeof(int) * length);
	if (!counter || length < 1)
		return (NULL);
	while (n < length)
	{
		counter[n] = (*f)(tab[n]);
		n++;
	}
	return (counter);
}
