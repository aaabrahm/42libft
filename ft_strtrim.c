/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owatanab <owatanab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:34:52 by owatanab          #+#    #+#             */
/*   Updated: 2023/06/22 14:53:26 by owatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

static int	malloc_size(char const *s, char const *t, int i);
{
	int c;

	c = 0;
	while (ft_strnstr(s, t, i))
	{
		s = ft_strnstr + 1;
		c++;
	}
	return (i - c * ft_strlen(t));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	char	*q;
	int		i;

	i = ft_strlen(s1);
	p = calloc(1 + malloc_size(s1, set, i));
	q = ft_strnstr(s1, set, i);
	if (p)
	{
		while (q)
		{
			ft_strlcat(p, s1, q - s1 + 1);
			s1 = q + ft_strlen(set);
			q = ft_strnstr(s1, q, i);
		}
	}
	return (p);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char s[] = "aijsousfbvibdhuh";
	printf("%s", ft_strtrim(s, "so"));
}