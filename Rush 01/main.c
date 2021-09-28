/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:28:57 by sspina            #+#    #+#             */
/*   Updated: 2021/09/19 18:47:17 by sspina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	ft_error(void)
{
	ft_putstr("Error\n");
}

int	main(int argc, char **argv)
{
	char	**tab;
	int		size;

	size = ft_size(argv[1]);
	tab = ft_create_tab(argv[1], size);
	if (argc != 2 || (!size))
		ft_error();
	else if (tab)
	{
		if (ft_solve(tab, size))
			ft_print_tab(tab, size);
		ft_delete(tab, size);
	}
	else
		ft_error();
	return (0);
}
