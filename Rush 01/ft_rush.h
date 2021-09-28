/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 14:26:20 by sspina            #+#    #+#             */
/*   Updated: 2021/09/18 14:29:05 by sspina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		ft_size(char *str);

char	**ft_create_tab(char *str, int size);

int		ft_solve(char **tab, int size);

void	ft_print_tab(char **tab, int size);

void	ft_delete(char **tab, int size);

int		ft_height_col(char **tab, int x, int delta, int size);

int		ft_height_row(char **tab, int y, int delta, int size);

int		ft_is_duplicate(char **tab, int x, int y, int size);

#endif
