/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owatanab <owatanab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:34:09 by owatanab          #+#    #+#             */
/*   Updated: 2023/06/25 18:49:05 by owatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char c, char *charset)
{
	if (c == 0)
		return (1);
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	get_n(char const *str, char c)
{
	int	f;
	int	i;

	f = 1;
	i = 0;
	while (*str)
	{
		if (*str != c && f)
		{
			f = 0;
			i++;
		}
		else if (*str == c && f == 0)
			f = 1;
	}
	return (c);
}

int	ft_strlen_1(char *str, char *charset)
{
	int	i;

	i = 0;
	while (check(str[i], charset) == 0)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char **c;
	int n;
	int i;
	int j;

	n = get_n(s, c);
	c = malloc(sizeof(char *) * (n + 1));
	while (i < n)
	{
		while (check(*str, charset))
			str++;
		j = 0;
		c[i] = malloc(ft_strlen_1(str, charset) + 1);
		while (check(*str, charset) == 0)
		{
			c[i][j++] = *str;
			str++;
		}
		c[i][j] = 0;
		i++;
	}
	c[i] = NULL;
	return (c);
}