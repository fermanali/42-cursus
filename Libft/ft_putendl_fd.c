/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:38:03 by farpacik          #+#    #+#             */
/*   Updated: 2022/02/04 05:11:59 by farpacik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
/*
#include <fcntl.h>

int main()
{
	int fd = open("dayi.txt", O_CREAT | O_RDWR, 0777);
	ft_putendl_fd("farpacik", fd);
}*/
/*Verilen dosya tanıtıcısına 's' dizesini;
 * ardından yeni bir satır gönderir */
