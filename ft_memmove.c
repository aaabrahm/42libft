/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owatanab <owatanab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:10:27 by owatanab          #+#    #+#             */
/*   Updated: 2023/06/22 13:52:56 by owatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned len)
{
	unsigned	i;
	char		*s;
	char		*t;

	i = 0;
	s = dst;
	t = (char *)src;
	while (i < len)
	{
		s[i] = t[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char s[] = "sdfffddd";
// 	char t[] = "cjj";
// 	printf("%s%s\n", ft_memmove(s, t, 6), s);
// 	printf("%s%s", memmove(s, t, 6), s);
// }