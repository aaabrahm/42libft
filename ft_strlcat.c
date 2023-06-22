/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owatanab <owatanab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:40:14 by owatanab          #+#    #+#             */
/*   Updated: 2023/06/22 13:53:28 by owatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_size(char *dest)
{
	int	i;

	i = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *restrict dest, const char *restrict src,
		unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = get_size((char *)dest);
	if (i >= size)
		return (size + get_size((char *)src));
	while (src[j] != 0 && i + j + 1 < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (i + get_size((char *)src));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char s[] = "ssddd";
// 	char t[] = "almlc";
// 	printf("%d%s", ft_strlcat(s, t, 10), s);
// }