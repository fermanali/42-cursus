/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:50:39 by farpacik          #+#    #+#             */
/*   Updated: 2022/02/04 04:58:55 by farpacik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*tmp_s1;
	unsigned const char	*tmp_s2;

	tmp_s1 = (unsigned const char *)s1;
	tmp_s2 = (unsigned const char *)s2;
	i = 0;
	while (i < n)
	{
		if (tmp_s1[i] != tmp_s2[i])
			return (tmp_s1[i] - tmp_s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char a[] = "ferman";
	char b[] = "633421";
	printf("%d", ft_memcmp(a, b, 3));
}
*/
/* bayt dizgisi s1'i bayt dizgisi s2 ile karşılaştırı
 *   Her iki dizenin de n bayt uzunluğunda olduğu varsayılır. */
