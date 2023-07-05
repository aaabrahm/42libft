/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owatanab <owatanab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:27:33 by owatanab          #+#    #+#             */
/*   Updated: 2023/07/05 19:21:13 by owatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	i;

	i = 0;
	while (s1[i])
		i++;
	p = malloc(i + 1);
	p[i] = 0;
	if (p)
	{
		while (i--)
			p[i] = s1[i];
	}
	return (p);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s", ft_strdup("hello"));
// }