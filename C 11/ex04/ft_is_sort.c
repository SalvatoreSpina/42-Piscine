/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 04:55:26 by sspina            #+#    #+#             */
/*   Updated: 2021/09/26 07:54:54 by sspina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	num1;
	int	num2;

	i = 0;
	num1 = 1;
	num2 = 1;
	if (length == 1 || length == 0)
		return (1);
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			num1++;
		else if ((*f)(tab[i], tab[i + 1]) > 0)
			num2++;
		else
		{
			num1++;
			num2++;
		}
		i++;
	}
	if (num1 == length || num2 == length)
		return (1);
	return (0);
}
