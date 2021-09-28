/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilipp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:42:42 by gphilipp          #+#    #+#             */
/*   Updated: 2021/09/26 16:42:42 by gphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	count_left_number(char *src)
{
	int		i;

	i = 0;
	while (*src != '\0' && char_is_space(*src))
		src++;
	while (*src != '\0' && char_is_numeric(*src) == 1)
	{
		i++;
		src++;
	}
	while (*src != '\0' && char_is_space(*src))
		src++;
	if (*src != ':')
		return (0);
	return (i);
}

int	get_left_number(char *dest, char *src)
{
	while (*src != '\0' && char_is_space(*src))
		src++;
	while (*src != '\0' && char_is_numeric(*src) == 1)
	{
		*dest = *src;
		dest++;
		src++;
	}
	while (*src != '\0' && char_is_space(*src))
		src++;
	if (*src != ':')
		return (0);
	*dest = '\0';
	return (1);
}

int	count_right_number(char *src)
{
	int		i;
	int		previous_is_space;

	i = 0;
	previous_is_space = 0;
	while (*src != ':')
		src++;
	src++;
	while (*src != '\0' && char_is_space(*src))
		src++;
	while (*src != '\0' && char_is_printable(*src) == 1)
	{
		if (char_is_space(*src) == 0
			|| (char_is_space(*(src + 1)) == 0 && *(src + 1) != '\0'))
			i++;
		previous_is_space = char_is_space(*src);
		src++;
	}
	while (*src != '\0' && char_is_space(*src))
		src++;
	if (*src != '\n' && *src != '\0')
		return (0);
	return (i);
}

int	get_right_number(char *dest, char *src)
{
	int		previous_is_space;

	previous_is_space = 0;
	while (*src != ':')
		src++;
	src++;
	while (*src != '\0' && char_is_space(*src))
		src++;
	while (*src != '\0' && char_is_printable(*src) == 1)
	{
		if (char_is_space(*src) == 0
			|| (char_is_space(*(src + 1)) == 0 && *(src + 1) != '\0'))
		{
			*dest = *src;
			dest++;
		}
		src++;
	}
	while (*src != '\0' && char_is_space(*src))
		src++;
	if (*src != '\n' && *src != '\0')
		return (0);
	*dest = '\0';
	return (1);
}

int	line_to_struct(t_number *number, char *src)
{
	int		length;

	length = count_left_number(src);
	if (length == 0)
		return (0);
	number->len = length;
	number->num = malloc(sizeof(char) * (length + 1));
	if (number->num == NULL)
		return (0);
	get_left_number(number->num, src);
	if (length == 0)
		return (0);
	length = count_right_number(src);
	number->word = malloc(sizeof(char) * (length + 1));
	if (number->word == NULL)
		return (0);
	get_right_number(number->word, src);
	return (1);
}
