/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:12:31 by namoreir          #+#    #+#             */
/*   Updated: 2023/08/23 16:32:04 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putptr(unsigned long int ptr)
{
	char		*base;
	size_t		size;

	if (ptr == NULL || ptr == 0)
	{
		write(1, "(nil)", 5);
		size = 5;
		return (size);
	}
	base = "0123456789abcdef";
	size = 0;
	if (ptr < 16)
		size += ft_putchar(base[ptr % 16]);
	else if (ptr >= 16)
	{
		size += ft_putnbr_hx_lower(ptr / 16);
		size += ft_putchar(base[ptr % 16]);
	}
	return (size);
}
