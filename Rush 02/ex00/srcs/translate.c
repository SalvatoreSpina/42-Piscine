/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilipp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:42:42 by gphilipp          #+#    #+#             */
/*   Updated: 2021/09/26 16:42:42 by gphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

t_number	*find_ion_in_dico(t_number *numbers, int length)
{
	int		i;
	int		len;

	i = 0;
	while (numbers[i].num != '\0')
	{
		len = numbers[i].len;
		if (numbers[i].is_ion == 1 && length == numbers[i].len)
			return (&numbers[i]);
		i++;
	}
	return (0);
}

t_number	*find_exact_number_in_dico(t_number *numbers, char *nb_xxx)
{
	int		i;
	int		len;

	i = 0;
	while (numbers[i].num != '\0')
	{
		len = numbers[i].len;
		if (numbers[i].is_ion == 0 && ft_strcmp(nb_xxx, numbers[i].num) == 0)
			return (&numbers[i]);
		i++;
	}
	return (0);
}

t_number	*find_number_in_dico2(t_number *numbers, char *nb_xxx, int pos)
{
	int			count_num;
	char		num[4];
	t_number	*find;

	count_num = ft_strlen(nb_xxx);
	if (count_num == 3 && nb_xxx[0] != '0')
	{
		my_strcpy(num, nb_xxx, 1);
		find = find_exact_number_in_dico(numbers, num);
		print(find, 0, pos);
		find = find_ion_in_dico(numbers, 3);
		print(find, 0, pos + 1);
	}
	else if (count_num == 2)
	{
		my_strcpy(num, nb_xxx, 2);
		num[1] = '0';
		find = find_exact_number_in_dico(numbers, num);
		print(find, 1, pos);
	}
	return (0);
}

t_number	*find_number_in_dico(t_number *numbers, char *nb_xxx, int pos)
{
	int			i;
	t_number	*find;

	i = 0;
	find = find_exact_number_in_dico(numbers, nb_xxx);
	if (nb_xxx[0] != '0' || pos == 1)
		print(find, 0, pos);
	if ((nb_xxx[0] - '0' + nb_xxx[1] - '0' + nb_xxx[2] - '0') == 0)
		return (0);
	if (find != 0)
		return (find);
	find = find_number_in_dico2(numbers, nb_xxx, pos);
	if (find != 0)
		return (0);
	if (nb_xxx[0] != '0' || nb_xxx[1] != '0' || nb_xxx[2] != '0')
		return (find_number_in_dico(numbers, &nb_xxx[1], pos - 1));
	return (numbers);
}

void	translate(t_number *numbers, char *nb)
{
	char		num[4];
	int			length;
	t_number	*find;
	int			len;
	int			i;

	length = ft_strlen(nb);
	i = 0;
	while (i < length)
	{
		if (i == 0 && length % 3 != 0)
			len = length % 3;
		else if (i == 0 && length < 3)
			len = length;
		else
			len = 3;
		my_strcpy(num, &nb[i], len);
		find = find_number_in_dico(numbers, num, length - i);
		if (find != 0)
			print(find_ion_in_dico(numbers, length - len - i + 1),
				0, length - i);
		i += len;
	}
}
