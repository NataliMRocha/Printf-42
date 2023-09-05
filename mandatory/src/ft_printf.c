/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:50:19 by namoreir          #+#    #+#             */
/*   Updated: 2023/09/05 15:12:23 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	size;
	int	i;

	size = 0;
	if (str)
	{
		i = 0;
		while (str[i])
		{
			write(1, &str[i], 1);
			size++;
			i++;
		}
	}
	else
		size += ft_putstr("(null)");
	return (size);
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
	{
		write(1, "%", 1);
		size++;
	}
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
		if (format[i] == '%' && format[i + 1] != 0)
		{
			size += ft_checkformat(format[i + 1], arg);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			size++;
		}
		i++;
	}
	va_end(arg);
	return (size);
}
