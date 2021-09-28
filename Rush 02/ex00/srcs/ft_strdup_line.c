/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_line.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilipp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:42:42 by gphilipp          #+#    #+#             */
/*   Updated: 2021/09/17 11:42:42 by gphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"
#include <stdlib.h>

int	ft_strlen_line(char *str)
{
	int		i;
	int		is_empty;

	i = 0;
	is_empty = 1;
	while (str[i] != '\n')
	{
		if (char_is_space(str[i]) == 0)
			is_empty = 0;
		i++;
	}
	if (is_empty)
		return (0);
	return (i);
}

char	*ft_strcpy_line(char *dest, char *src)
{
	char	*pt_dest;

	pt_dest = dest;
	while (*src != '\n')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (pt_dest);
}

char	*ft_strdup_line(char *src)
{
	int		length;
	char	*dest;

	length = ft_strlen_line(src);
	dest = malloc(sizeof(char) * (length + 1));
	if (length > 0)
		ft_strcpy_line(dest, src);
	else
		*dest = '\0';
	return (dest);
}
