/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:14:15 by farpacik          #+#    #+#             */
/*   Updated: 2022/02/06 15:14:33 by farpacik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && (char)c != *s)
		s++;
	if ((char)c == *s)
		return ((char *)s);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{	
	const char dizi[] = "fermanali";
	char *c;
	c = ft_strchr(dizi, 'a');
	printf("%s", c);
}*/
/* stringin bellli karakterinden sonraki kısmını alıyor. */
