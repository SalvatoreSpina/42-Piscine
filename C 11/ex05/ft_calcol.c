/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calcol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 07:44:30 by sspina            #+#    #+#             */
/*   Updated: 2021/09/26 07:44:43 by sspina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

void	ft_calcol(int a, char op, int b)
{
	int long	calcol;

	calcol = 0;
	if (op == '+')
		calcol = a + b;
	if (op == '-')
		calcol = a - b;
	if (op == '*')
		calcol = a * b;
	if (op == '/')
	{
		if (b == 0)
			return (ft_putstr("Stop : division by zero\n"));
		calcol = a / b;
	}
	if (op == '%')
	{
		if (b == 0)
			return (ft_putstr("Stop : modulo by zero\n"));
		calcol = a % b;
	}
	ft_putnbr(calcol);
	ft_putchar('\n');
}
