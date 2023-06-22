/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owatanab <owatanab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 19:06:36 by owatanab          #+#    #+#             */
/*   Updated: 2023/06/22 13:53:04 by owatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*a;

	a = (char *)s;
	while (*a)
	{
		if (*a == c)
			return (a);
		a++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	t[10];

// 	strcpy(t, "asoicdv");
// 	printf("%s, %s", ft_strchr(t, 'c'), strchr(t, 'b'));
// 	printf("%s, %s", ft_strchr(t, 'c'), strchr(t, 'b'));
// }
