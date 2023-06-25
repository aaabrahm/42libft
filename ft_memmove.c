/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owatanab <owatanab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:10:27 by owatanab          #+#    #+#             */
/*   Updated: 2023/06/25 15:41:38 by owatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*t;

	s = dst;
	t = (char *)src;
	if (s < t)
	{
		while (len--)
			*s++ = *t++;
	}
	else
	{
		s = s + len - 1;
		t = t + len - 1;
		while (len--)
			*s-- = *t--;
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