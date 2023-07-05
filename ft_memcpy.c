/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owatanab <owatanab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:14:16 by owatanab          #+#    #+#             */
/*   Updated: 2023/07/05 18:30:21 by owatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s;

	char *restrict t;
	i = -1;
	s = dst;
	t = (char *restrict)src;
	while (++i < n)
		s[i] = t[i];
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char s[] = "sdfsd";
// 	char t[] = "as";
// 	printf("%s", ft_memcpy(s, t, 3));
// 	char s1[] = "sdfsd";
// 	char t1[] = "as";
// 	printf("%s", memcpy(s1, t1, 3));
// }