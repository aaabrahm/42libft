/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owatanab <owatanab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:27:33 by owatanab          #+#    #+#             */
/*   Updated: 2023/06/22 13:53:16 by owatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	p = malloc(i);
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