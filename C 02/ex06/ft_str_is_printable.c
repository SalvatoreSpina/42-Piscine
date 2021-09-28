/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 21:19:05 by sspina            #+#    #+#             */
/*   Updated: 2021/09/15 16:15:56 by sspina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	n;
	int	print;

	n = 0;
	print = 1;
	while (str[n])
	{
		if (str[n] >= 32 && str[n] <= 126)
			print = 1;
		else
			return (0);
		n++;
	}
	return (print);
}