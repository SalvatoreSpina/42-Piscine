/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dico.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilipp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:42:42 by gphilipp          #+#    #+#             */
/*   Updated: 2021/09/26 16:42:42 by gphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

char	*get_content(t_number **dico, char *path)
{
	int			length;
	char		*content;
	int			newline;

	if (fs_open(path, &length, &newline) == 0)
		return (0);
	content = fs_read(path, length);
	*dico = malloc(sizeof(t_number) * (newline + 1));
	dico[newline]->num = "";
	dico[newline]->len = 0;
	dico[newline]->word = "";
	dico[newline]->is_ion = 0;
	return (content);
}

int	is_ion(char *src)
{
	int		i;

	i = 0;
	if (*src == '1')
		src++;
	else
		return (0);
	while (*src == '0')
	{
		src++;
		i++;
	}
	if (*src == '\0' && i > 1)
		return (1);
	return (0);
}

int	load_dict(t_number **dico, char *path)
{
	int			i;
	int			index;
	char		*content;
	char		*line;

	content = get_content(dico, path);
	i = 0;
	index = 0;
	while (content[i] != '\0')
	{
		line = ft_strdup_line(&content[i]);
		if (*line != 0)
		{
			if (line_to_struct(&(*dico)[index], line) == 0)
				return (0);
			(*dico)[index].is_ion = is_ion((*dico)[index].num);
			index++;
		}
		while (content[i] != '\n')
			i++;
		free(line);
		i++;
	}
	free(content);
	return (1);
}

void	free_dict(t_number **dico)
{
	int		i;

	i = 0;
	while ((*dico)[i].num != '\0')
	{
		free((*dico)[i].num);
		free((*dico)[i].word);
		i++;
	}
	free(*dico);
}
