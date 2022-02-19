/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:31:11 by farpacik          #+#    #+#             */
/*   Updated: 2022/02/04 13:44:27 by farpacik         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>

int main()
{
	int fd = open("deneme.txt", O_CREAT | O_RDWR, 0777);
	ft_putchar_fd('f', fd);
}*/
/* işlevi c karakterini yazar, 
 * imzasız karaktere dönüştürür
 * akış tarafından gösterilen çıkış akışına 
 * verilen dosya tanıtıcısına c karakterinin çıktısını verir */
