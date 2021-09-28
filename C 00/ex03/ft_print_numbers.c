/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 19:05:47 by sspina            #+#    #+#             */
/*   Updated: 2021/09/09 19:10:38 by sspina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
    char number;
    number  = '0';
        while (number <= '9')
        {
            write(1, &number, 1);
            number ++;
        }
}

int main ()
{
    ft_print_numbers();
}
