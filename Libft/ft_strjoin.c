/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 23:49:23 by farpacik          #+#    #+#             */
/*   Updated: 2022/02/06 17:01:06 by farpacik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	r = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (r == NULL)
		return (NULL);
	i = 0;
	while (*s1 != '\0')
		r[i++] = *s1++;
	while (*s2 != '\0')
		r[i++] = *s2++;
	r[i] = '\0';
	return (r);
}
/* malloc ile iki dizeyi bir dizede birleştirme */
/*
#include <stdio.h>

int main()
{
	const char dizi[] = "didim";
	printf("%s", ft_strjoin(dizi, "far"));
}*/
