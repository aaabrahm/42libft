/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owatanab <owatanab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:36:17 by owatanab          #+#    #+#             */
/*   Updated: 2023/06/22 13:54:18 by owatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned start, unsigned len)
{
	char	*p;
	int		i;

	i = 0;
	while (s[i])
		i++;
	if (len > i - start)
		len = i - start;
	p = malloc(len + 1);
	while (len--)
		p[len] = s[len];
	return (p);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s", ft_substr("hello", 2, 2));
// }