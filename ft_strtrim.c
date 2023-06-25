/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owatanab <owatanab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:34:52 by owatanab          #+#    #+#             */
/*   Updated: 2023/06/25 19:48:07 by owatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*start;
	char	*f;
	char	*q;

	i = 0;
	while (s1[i] == set[i] && set[i])
		i++;
	start = (char *)s1;
	if (set[i] == 0)
		start += i;
	i = ft_strlen(set);
	j = ft_strlen(s1);
	f = (char *)s1 + j;
	while (j >= 0 && i >= 0 && set[i--] == s1[j])
		j--;
	if (i == -1)
	{
		f -= ft_strlen(set);
	}
	i = 0;
	q = ft_calloc(f - start + 1, 1);
	if (q)
		ft_strlcat(q, start, f - start + 1);
	return (q);
}

// int	main(void)
// {
// 	// char s[] = "aaissssoooopp";
// 	printf("%s", ft_strtrim("hello world", "world"));
// }