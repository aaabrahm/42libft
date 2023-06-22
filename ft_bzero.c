/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: owatanab <owatanab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:39:32 by owatanab          #+#    #+#             */
/*   Updated: 2023/06/22 13:52:09 by owatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, unsigned n)
{
	int		i;
	char	*a;

	a = s;
	i = 0;
	while (n--)
		a[i++] = 0;
}

// int	main(void)
// {
// 	char s[] = "aaa";
// 	printf("%s", s);
// 	ft_bzero(s, 2);
// 	printf("%d", s[2]);
// }