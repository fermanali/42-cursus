/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 18:14:33 by farpacik          #+#    #+#             */
/*   Updated: 2022/02/06 15:06:24 by farpacik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (i < ft_strlen(s))
	{
		f(i, s + i);
		i++;
	}
}
/*
void	f(unsigned int index, char *c)
{
	*c -= 5;
}

#include <stdio.h>

int main()
{
	char a[] = "ramazan";
	ft_striteri(a, &f);
	printf("%s", a);
}*/
