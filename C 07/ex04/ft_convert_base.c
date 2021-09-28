/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:12:46 by sspina            #+#    #+#             */
/*   Updated: 2021/09/26 00:43:04 by sspina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *s);
int				checkbase(char *base);
int				isbase(char c, char *base);
int				pick(char c, char *base);
int				ft_atoi_base(char *str, char *base);

int	count_nbr(unsigned int i, char *base)
{
	int	b;

	b = 0;
	while (i >= ft_strlen(base))
	{
		i = i / ft_strlen(base);
		b++;
	}
	return (++b);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	nb;
	int				checkneg;
	char			*res;
	int				i;

	if (!checkbase(base_from) || !checkbase(base_to))
		return (0);
	checkneg = ft_atoi_base(nbr, base_from);
	if (checkneg < 0)
		nb = -checkneg;
	else
		nb = checkneg;
	i = count_nbr(nb, base_to) + ((checkneg < 0));
	res = malloc(sizeof(char) * (i + 1));
	res[i] = 0;
	while (i--)
	{
		res[i] = base_to[nb % ft_strlen(base_to)];
		nb = nb / ft_strlen(base_to);
	}
	if (checkneg < 0)
		res[0] = '-';
	return (res);
}
