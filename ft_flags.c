/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natali <natali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:00:04 by natali            #+#    #+#             */
/*   Updated: 2023/08/26 11:16:20 by natali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_hash(const char *format, t_sizes *sizes)
{
	sizes->i++;
	if (format[sizes->i + 1] == 'x')
	{
		sizes->size += ft_putstr("0x");
		return ;
	}
	if (format[sizes->i + 1] == 'X')
	{
		sizes->size += ft_putstr("0X");
		return ;
	}
	return ;
}

void	ft_space(const char *format, t_sizes *sizes)
{
	sizes->i++;
	if (format[sizes->i + 1] == 'i' || format[sizes->i + 1] == 'd')
	{
		sizes->size += ft_putchar(' ');
		return ;
	}
}
