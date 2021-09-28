/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilipp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:42:42 by gphilipp          #+#    #+#             */
/*   Updated: 2021/09/26 16:42:42 by gphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft_h.h"

int	fs_open(char *path, int *length, int *newline)
{
	int		fd;
	char	src;
	int		full_line_space;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (0);
	*length = 0;
	*newline = 0;
	full_line_space = 1;
	while (read(fd, &src, 1))
	{
		if (src == '\n')
		{
			if (full_line_space == 0)
				(*newline)++;
			full_line_space = 1;
		}
		if (char_is_space(src) == 0)
			full_line_space = 0;
		(*length)++;
	}
	close(fd);
	return (1);
}

char	*fs_read(char *path, int length)
{
	int		i;
	int		fd;
	char	*content;
	char	src;

	i = 0;
	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (0);
	content = malloc(sizeof(char) * (length + 1));
	if (content == 0)
		return (0);
	while (read(fd, &src, 1))
	{
		content[i] = src;
		i++;
	}
	content[length] = '\0';
	close(fd);
	return (content);
}
