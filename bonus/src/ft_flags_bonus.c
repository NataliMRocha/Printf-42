/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:00:04 by natali            #+#    #+#             */
/*   Updated: 2023/09/05 15:17:38 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_hash(const char *format, t_sizes *sizes, va_list arg)
{
	unsigned int	n;

	while (format[++sizes->i] == '#')
	{
		if (format[sizes->i + 1] == 'x' || format[sizes->i + 1] == 'X')
		{
			n = va_arg(arg, unsigned int);
			if (n > 0 && format[sizes->i + 1] == 'x')
			{
				sizes->size += ft_putstr("0x");
				sizes->size += ft_putnbr_hx(n, "0123456789abcdef");
			}
			else if (n > 0 && format[sizes->i + 1] == 'X')
			{
				sizes->size += ft_putstr("0X");
				sizes->size += ft_putnbr_hx(n, "0123456789ABCDEF");
			}
			else
				sizes->size += ft_putnbr(n);
			break ;
		}
	}
	return ;
}

void	ft_space(const char *format, t_sizes *sizes, va_list arg)
{
	int		n;
	char	*str;

	while (format[++sizes->i] == ' ')
	{
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
			break ;
		}
		else if (format[sizes->i + 1] == 's')
		{
			str = va_arg(arg, char *);
			sizes->size += ft_putstr(str);
			break ;
		}
	}
	return ;
}
