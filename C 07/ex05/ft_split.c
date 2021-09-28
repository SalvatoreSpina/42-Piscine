/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:13:29 by sspina            #+#    #+#             */
/*   Updated: 2021/09/26 00:43:27 by sspina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_charset(char str, char *charset)
{
	while (*charset)
	{
		if (str == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && ft_charset(str[i], charset) == 0)
		i++;
	return (i);
}

int	ft_count(char *str, char *charset)
{
	int	i;
	int	j;

	j = 0;
	while (*str)
	{
		while (*str && ft_charset(*str, charset) == 1)
			str++;
		i = ft_len(str, charset);
		str += i;
		if (i)
			j++;
	}
	return (j);
}

char	*ft_strcpy(char *src, int j)
{
	char	*dst;
	int		i;

	i = 0;
	dst = malloc((j + 1) * sizeof(char));
	if (!dst)
		return (0);
	while (i < j && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_split(char *str, char *charset)
{
	char		**dest;
	int			size;
	int			i;
	int			j;

	i = 0;
	size = ft_count(str, charset);
	dest = malloc((size + 1) * sizeof(char *));
	if (!dest)
		return (0);
	while (i < size)
	{
		while (ft_charset(*str, charset))
			str++;
		j = ft_len(str, charset);
		dest[i] = ft_strcpy(str, j);
		str += j;
		i++;
	}
	dest[size] = 0;
	return (dest);
}
