/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:47:47 by namoreir          #+#    #+#             */
/*   Updated: 2023/08/24 12:37:29 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	ft_putchar(char c)
// {
// 	int	size;

// 	write(1, &c, 1);
// 	size = 1;
// 	return (size);
// }

int	ft_putnbr_hx_lower(unsigned int hx)
{
	char		*base;
	int			size;

	if (hx == 0)
	{
		write(1, "0", 1);
		size = 1;
		return (size);
	}
	base = "0123456789abcdef";
	size = 0;
	if (hx < 16)
		size += ft_putchar(base[hx % 16]);
	else if (hx >= 16)
	{
		size += ft_putnbr_hx_lower(hx / 16);
		size += ft_putchar(base[hx % 16]);
	}
	return (size);
}

int	ft_putnbr_hx_upper(unsigned int hx)
{
	char		*base;
	int			size;

	if (hx == 0)
	{
		write(1, "0", 1);
		size = 1;
		return (size);
	}
	base = "0123456789ABCDEF";
	size = 0;
	if (hx < 16)
		size += ft_putchar(base[hx % 16]);
	else if (hx >= 16)
	{
		size += ft_putnbr_hx_upper(hx / 16);
		size += ft_putchar(base[hx % 16]);
	}
	return (size);
}

// #include <stdio.h>

// int main()
// {
// 	int hx = 0;
// 	int result = ft_putnbr_hx_lower(hx);
// 	printf("%c", '\n');
// 	printf("%i", result);
// 	printf("%c", '\n');
// 	int result_2 = printf("%x", hx);
// 	printf("%c", '\n');
// 	printf("%i", result_2);
// }