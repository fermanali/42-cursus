/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:48:55 by farpacik          #+#    #+#             */
/*   Updated: 2022/02/04 05:05:30 by farpacik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
/*
#include <stdio.h>

int main()
{
	char b[] = "farpacık";
	char c[] = "f12r3r1";
	printf("%s", ft_memset(b, 'c', 2));
}*/
/* C parametresi ile gösterilen bellek bölgesindeki karakteri (unsigned char),
 *  b parametresindeki bellek bölgesinin
 *  ilk n parametre değeri kadar byte'ına kopyalar. */
