/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:09:04 by farpacik          #+#    #+#             */
/*   Updated: 2022/02/17 12:09:18 by farpacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnbr(int c)
{
	int	len;

	len = 0;
	if (c == -2147483648)
		return (ft_putstr("-2147483648"));
	if (c < 0)
	{
		len += ft_putchar('-');
		len += ft_putnbr(c * -1);
	}
	else if (c >= 10)
	{
		len += ft_putnbr(c / 10);
		len += ft_putchar(c % 10 + '0');
	}
	else
		len += ft_putchar(c + '0');
	return (len);
}

int	hex_base(unsigned long num, char x, int i)
{
	int	result;

	result = 0;
	if (num >= (unsigned)i)
		result += hex_base(num / i, x, i);
	if (x == 'x')
		result += ft_putchar("0123456789abcdef"[num % i]);
	else if (x == 'X')
		result += ft_putchar("0123456789ABCDEF"[num % i]);
	else if (x == 'p')
		result += ft_putchar("0123456789abcdef"[num % i]);
	return (result);
}
