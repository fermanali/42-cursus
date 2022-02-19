/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:16:46 by farpacik          #+#    #+#             */
/*   Updated: 2022/02/07 15:44:28 by farpacik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ss;

	i = 0;
	ss = 0;
	while (s[i])
	{
		if (s[i] == (const char)c)
			ss = (char *)(s + i);
		i++;
	}
	if (s[i] == (const char)c)
		ss = (char *)(s + i);
	return (ss);
}
/*
#include <stdio.h>

int main()
{
	const char s[] = "fermanaliarpck";
	printf("%s", ft_strrchr(s, 'a'));
	return(0);
}*/
