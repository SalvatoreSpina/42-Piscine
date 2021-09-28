/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 09:42:42 by sspina            #+#    #+#             */
/*   Updated: 2021/09/25 09:42:42 by sspina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H

# include <stdlib.h>

typedef struct s_number
{
	char	*num;
	int		len;
	char	*word;
	int		is_ion;
}	t_number;

int		char_is_space(char str);
int		char_is_numeric(char c);
int		char_is_printable(char c);
int		load_dict(t_number **dico, char *path);
void	free_dict(t_number **numbers);
int		line_to_struct(t_number *number, char *src);
void	translate(t_number *numbers, char *nb);
void	ft_putstr(char *str);
void	print(t_number *number, int hyphen, int pos);
char	*ft_strdup_line(char *src);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	my_strcpy(char *dest, char *src, unsigned int size);
int		fs_open(char *path, int *length, int *newline);
char	*fs_read(char *path, int length);

#endif
