/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natali <natali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 08:28:41 by natali            #+#    #+#             */
/*   Updated: 2023/08/26 11:15:25 by natali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

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
	va_list	arg;
	t_sizes	sizes;

	sizes.i = 0;
	sizes.size = 0;
	va_start(arg, format);
	while (format[sizes.i])
	{
		if (format[sizes.i] == '%' && format[sizes.i + 1] != 0)
		{
			if (format[sizes.i + 1] == '#')
				ft_hash(format, &sizes);
			if (format[sizes.i + 1] == ' ')
				ft_space(format, &sizes);
			sizes.size += ft_checkformat(format[sizes.i + 1], arg);
			sizes.i++;
		}
		else
			sizes.size += ft_putchar(format[sizes.i]);
		sizes.i++;
	}
	va_end(arg);
	return (sizes.size);
}

/* #include <stdio.h>
#include <limits.h>
int main ()
{
	int result = ft_printf(" %#x ",0);
	printf("\n");
	printf("%i", result);
	printf("\n");
	int result_2 = printf(" %#x ",0);
	printf("\n");
	printf("%i", result_2);
	printf("\n");
} */