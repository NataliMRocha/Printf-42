/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:50:19 by namoreir          #+#    #+#             */
/*   Updated: 2023/08/24 15:42:10 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

int	ft_checkformat(char type, va_list arg)
{
	int	size;

	size = 0;
	if (type == 'c')
		size += ft_putchar(va_arg(arg, int));
	else if (type == 's')
		size += ft_putstr(va_arg(arg, char *));
	else if (type == 'p')
		size += ft_putptr(va_arg(arg, unsigned long), "0123456789abcdef");
	else if (type == 'i' || type == 'd')
		size += ft_putnbr(va_arg(arg, int));
	else if (type == 'u')
		size += ft_putnbr_uns(va_arg(arg, unsigned int));
	else if (type == 'x')
		size += ft_putnbr_hx(va_arg(arg, unsigned int), "0123456789abcdef");
	else if (type == 'X')
		size += ft_putnbr_hx(va_arg(arg, unsigned int), "0123456789ABCDEF");
	else if (type == '%')
		size += ft_putchar('%');
	return (size);
}

int	ft_printf(const char *format, ...)
{
	int		size;
	va_list	arg;
	int		i;

	size = 0;
	i = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]) != 0)
		{
			size += ft_checkformat(format[i + 1], arg);
			i++;
		}
		else
			size += ft_putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (size);
}
