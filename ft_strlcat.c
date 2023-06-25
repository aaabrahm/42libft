/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owatanab <owatanab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:40:14 by owatanab          #+#    #+#             */
/*   Updated: 2023/06/25 15:56:40 by owatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen((char *)dest);
	if (i >= size)
		return (size + ft_strlen((char *)src));
	while (src[j] != 0 && i + j + 1 < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (i + ft_strlen((char *)src));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char t[] = "almlc";
// 	printf("%zu", ft_strlcat(NULL, t, 10));
// 	printf("aaaa");
// }