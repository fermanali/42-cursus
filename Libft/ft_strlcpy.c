/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 00:17:50 by farpacik          #+#    #+#             */
/*   Updated: 2022/02/06 17:53:20 by farpacik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = ft_strlen(src);
	if (!dest || !src)
		return (0);
	if (size)
	{
		while (*src && size-- - 1)
			*dest++ = *src++;
		*dest = 0;
	}
	return (i);
}
/*
#include <stdio.h>

int main()
{
	char dest[] = "fermanaliarpacik";
	char src[] = "arpacikalif";
	printf("%zu", ft_strlcpy(src + 2, src, 10));
}*/
