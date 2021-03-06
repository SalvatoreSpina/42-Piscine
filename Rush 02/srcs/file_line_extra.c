/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_line_extra.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilipp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:42:42 by gphilipp          #+#    #+#             */
/*   Updated: 2021/09/26 16:42:42 by gphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	char_is_numeric(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int	char_is_printable(char c)
{
	if (' ' <= c && c <= '~')
		return (1);
	return (0);
}
