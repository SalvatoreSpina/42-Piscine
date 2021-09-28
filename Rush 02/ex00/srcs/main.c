/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 09:42:42 by sspina            #+#    #+#             */
/*   Updated: 2021/09/25 09:42:42 by sspina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	check_arg(int argc, char **argv, char **number, char **path_dict)
{
	if (argc == 2)
	{
		*path_dict = "./dicts/numbers.dict";
		*number = argv[1];
		return (1);
	}
	else if (argc == 3)
	{
		*path_dict = argv[1];
		*number = argv[2];
		return (1);
	}
	return (0);
}

int	test_number(char *number)
{
	int		i;

	i = -1;
	while (number[++i])
		if (number[i] < '0' || number[i] > '9')
			return (0);
	return (1);
}

int	start(int argc, char **argv)
{
	t_number	*dico;
	char		*number;
	char		*path_dict;

	if (check_arg(argc, argv, &number, &path_dict) == 0
		|| test_number(number) == 0)
		ft_putstr("Error\n");
	else
	{
		if (load_dict(&dico, path_dict) == 0)
		{
			ft_putstr("Dict Error\n");
			return (0);
		}
		translate(dico, number);
		free_dict(&dico);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	start(argc, argv);
	return (0);
}
