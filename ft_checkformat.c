/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkformat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:30:13 by namoreir          #+#    #+#             */
/*   Updated: 2023/08/24 12:47:06 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkformat(const char *format, va_list	argptr, int size)
{
	while (format)
	{
		if (*(format + 1) == 'c')
			size += ft_putchar(va_arg(argptr, int));
		else if (*(format + 1) == 's')
			size += ft_putstr(va_arg(argptr, char *));
		else if (*(format + 1) == 'p')
			size += ft_putptr(va_arg(argptr, unsigned long int));
		else if (*(format + 1) == 'i' || *(format + 1) == 'd')
			size += ft_putnbr(va_arg(argptr, int));
		else if (*(format + 1) == 'u')
			size += ft_putnbr_uns(va_arg(argptr, unsigned int));
		else if (*(format + 1) == 'x')
			size += ft_putnbr_hx_lower(va_arg(argptr, unsigned int));
		else if (*(format + 1) == 'X')
			size += ft_putnbr_hx_upper(va_arg(argptr, unsigned int));
		else if (*(format + 1) == '%')
			size += ft_putchar(va_arg(argptr, int));
		else
			size += ft_putstr(va_arg(argptr, char *));
		format++;
	}
	return (size);
}
