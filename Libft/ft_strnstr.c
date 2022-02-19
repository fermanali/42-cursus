/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:12:50 by farpacik          #+#    #+#             */
/*   Updated: 2022/02/06 18:19:27 by farpacik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int		i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	j = ft_strlen(needle);
	while (*haystack != '\0' && n-- >= j)
	{
		i = 0;
		while (needle[i] == haystack[i])
		{
			i++;
			if (needle[i] == '\0')
				return ((char *)(haystack));
		}
		haystack++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
	printf("%s", ft_strnstr("fermanaliarpacik", "ar", 20));
	return(0);
}*/
