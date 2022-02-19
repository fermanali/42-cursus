/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 00:54:45 by farpacik          #+#    #+#             */
/*   Updated: 2022/02/06 18:17:43 by farpacik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s1 == *s2 && n-- - 1)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
/*
#include <stdio.h>

int main()
{
	const char s1[] = "fermanali";
	const char s2[] = "fermoooo";
	printf("%d", ft_strncmp(s1, s2, 20));
}
//iki dizeyi karşılaştırır*/
