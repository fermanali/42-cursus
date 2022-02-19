/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farpacik <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:08:07 by farpacik          #+#    #+#             */
/*   Updated: 2022/02/17 12:09:20 by farpacik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char format, va_list argv)
{
	int	result;

	result = 0;
	if (format == 'c')
		result += ft_putchar(va_arg(argv, int));
	else if (format == 's')
		result += ft_putstr(va_arg(argv, char *));
	else if (format == 'd' || format == 'i')
		result += ft_putnbr(va_arg(argv, int));
	else if (format == 'u')
		result += hex_base(va_arg(argv, unsigned int), 'x', 10);
	else if (format == 'p')
	{
		result += write(1, "0x", 2);
		result += hex_base(va_arg(argv, unsigned long), 'p', 16);
	}
	else if (format == 'x' || format == 'X')
		result += hex_base(va_arg(argv, unsigned int), format, 16);
	else if (format == '%')
		return (ft_putchar('%'));
	return (result);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		toplam_karakter_sy;

	va_start(list, str);
	toplam_karakter_sy = 0;
	while (*str != 0)
	{
		if (*str == '%')
		{
			toplam_karakter_sy += ft_format(*(str + 1), list);
			str++;
		}
		else
		{
			write(1, str, 1);
			toplam_karakter_sy++;
		}
		str++;
	}
	va_end (list);
	return (toplam_karakter_sy);
}
/*int	main()
{
	int		ft, fr;
	char	*z = "ferman";

    ft = ft_printf("\n%%c = %c\n%%s = %s\n%%d = %d\n%%i = %i\n\
%%u = %u\n%%p = %p\n%%x = %x\n%%X = %X\n%% = %c\n ", 'k',\
"ferman", -8562, 9672, 777, &z, 241364, 241364, '%');
    printf("%d\n", ft);
    ft = printf("\n%%c = %c\n%%s = %s\n%%d = %d\n%%i = %i\n\
%%u = %u\n%%p = %p\n%%x = %x\n%%X = %X\n%% = %c\n ", 'k',\
"ferman", -8562, 9672, 777, &z, 241364, 241364, '%');
    printf("%d\n", ft);
}*/
