/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:17:24 by sspina            #+#    #+#             */
/*   Updated: 2021/09/15 16:13:45 by sspina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	n;
	int	uppercase;

	n = 0;
	uppercase = 1;
	while (str[n])
	{
		if (str[n] >= 65 && str[n] <= 90)
			uppercase = 1;
		else
			return (0);
		n++;
	}
	return (uppercase);
}
