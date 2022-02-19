/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:25:05 by farpacik          #+#    #+#             */
/*   Updated: 2022/01/22 16:04:02 by farpacik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	return (c + ('a' - 'A') * (c >= 'A' && c <= 'Z'));
}
/*
int main()
{
    printf("%d", ft_tolower('A'));
}*/
