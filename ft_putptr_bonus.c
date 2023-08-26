/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natali <natali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:12:31 by namoreir          #+#    #+#             */
/*   Updated: 2023/08/26 09:13:07 by natali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_putptr(unsigned long ptr, char *base)
{
	int			size;

	if ((void *)ptr == NULL || ptr == 0)
	{
		write(1, "(nil)", 5);
		size = 5;
		return (size);
	}
	size = 0;
	if (ptr < 16)
	{
		write(1, "0x", 2);
		size = 2;
		size += ft_putchar(base[ptr % 16]);
	}
	else if (ptr >= 16)
	{
		size += ft_putptr(ptr / 16, base);
		size += ft_putchar(base[ptr % 16]);
	}
	return (size);
}
