/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:13:06 by sspina            #+#    #+#             */
/*   Updated: 2021/09/16 14:58:39 by sspina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		write(1, &str[n++], 1);
	return ;
}

int	main(int argc, char *argv[])
{
	int	n;

	n = 1;
	while (argc > n)
	{
		ft_putstr(argv[n++]);
		ft_putstr("\n");
	}
	return (0);
}
