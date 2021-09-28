/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilipp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 09:42:42 by gphilipp          #+#    #+#             */
/*   Updated: 2021/09/26 09:42:42 by gphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	char_is_space(char str)
{
	if (str == '\t' || str == '\n' || str == '\v' || str == '\f'
		|| str == '\r' || str == ' ')
	{
		return (1);
	}
	return (0);
}

void	my_strcpy(char *dest, char *src, unsigned int size)
{
	char			*pt_dest;
	unsigned int	i;

	i = 0;
	pt_dest = dest;
	while (*src != '\0' && i < size)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
}

void	print(t_number *number, int hyphen, int pos)
{
	if (number == 0)
		return ;
	ft_putstr(number->word);
	if (hyphen)
		ft_putstr("-");
	else if (pos - number->len != 0 || (pos != 0 && number->is_ion == 1))
		ft_putstr(" ");
}
