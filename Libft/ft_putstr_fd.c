/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 03:46:31 by farpacik          #+#    #+#             */
/*   Updated: 2022/02/04 05:26:03 by farpacik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s != '\0')
		ft_putchar_fd(*s++, fd);
}
/*
#include <fcntl.h>

int main()
{
	int fd = open("faff.txt",O_CREAT | O_RDWR, 0777);
	ft_putstr_fd("c", fd);
}*/
