/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:18:36 by farpacik          #+#    #+#             */
/*   Updated: 2022/02/06 14:55:26 by farpacik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*c;

	i = ft_strlen(s);
	c = (char *)malloc(sizeof(char) * (i + 1));
	if (c == NULL)
		return (NULL);
	c[i] = 0;
	while (i--)
		c[i] = s[i];
	return (c);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	const char dizi[] = "fermanaliarpacik";
	printf("%s", ft_strdup(dizi));
}*/
