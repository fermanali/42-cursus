/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:32:07 by farpacik          #+#    #+#             */
/*   Updated: 2022/02/06 18:30:29 by farpacik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
/*
#include <stdio.h>

int main()
{
	const char s1[] = "99FERMAN99ALİ99ARPACİK99";
	printf("%s", ft_strtrim(s1, "99"));
}*/
/*Malloc kullanrak hafızada yer ayırılır 
ardından ana stringde kırpılmak istenilen karakterlerin
hepsi kırpılır sonuç olarak elde edilen yeni string
döndürülür. */
