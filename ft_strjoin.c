/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owatanab <owatanab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:11:56 by owatanab          #+#    #+#             */
/*   Updated: 2023/06/22 13:53:22 by owatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	p = malloc(i + j + 1);
	if (p)
	{
		i = 0;
		while (s1[i])
		{
			p[i] = s1[i];
			i++;
		}
		j = 0;
		while (s2[j])
		{
			p[i + j] = s2[j];
			j++;
		}
		p[i + j] = 0;
	}
	return (p);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s", ft_strjoin("asd", "fihi"));
// }