/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owatanab <owatanab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:52:03 by owatanab          #+#    #+#             */
/*   Updated: 2023/06/22 13:54:00 by owatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	long	i;

	i = 0;
	while ((s1[i] != 0 || s2[i] != 0) && (unsigned int)i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_strncmp("asd", "asf", 3));
// }