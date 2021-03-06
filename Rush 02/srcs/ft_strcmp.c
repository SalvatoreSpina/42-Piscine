/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gphilipp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 09:42:42 by gphilipp          #+#    #+#             */
/*   Updated: 2021/09/09 09:42:42 by gphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 > *s2 || *s2 == '\0')
			return (1);
		else if (*s1 < *s2 || *s1 == '\0')
			return (-1);
		s1++;
		s2++;
	}
	return (0);
}
