/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natali <natali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:00:04 by natali            #+#    #+#             */
/*   Updated: 2023/08/26 13:28:07 by natali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_hash(const char *format, t_sizes *sizes, va_list arg)
{
	unsigned int	n;

	if (format[++sizes->i + 1] == 'x')
	{
		n = va_arg(arg, unsigned int);
		if (n > 0)
		{
			sizes->size += ft_putstr("0x");
			sizes->size += ft_putnbr_hx(n, "0123456789abcdef");
		}
		else
			sizes->size += ft_putnbr(n);
	}
	else if (format[sizes->i + 1] == 'X')
	{
		n = va_arg(arg, unsigned int);
		if (n > 0)
		{
			sizes->size += ft_putstr("0X");
			sizes->size += ft_putnbr_hx(n, "0123456789ABCDEF");
		}
		else
			sizes->size += ft_putnbr(n);
	}
	return ;
}

void	ft_space(const char *format, t_sizes *sizes, va_list arg)
{
	int		n;
	char	*str;

	sizes->i++;
	if (format[sizes->i + 1] == 'i' || format[sizes->i + 1] == 'd')
	{
		n = va_arg(arg, int);
		if (n >= 0)
		{
			sizes->size += ft_putchar(' ');
			sizes->size += ft_putnbr(n);
		}
		else
			sizes->size += ft_putnbr(n);
	}
	else if (format[sizes->i + 1] == 's')
	{
		str = va_arg(arg, char *);
		sizes->size += ft_putstr(str);
	}
	return ;
}
