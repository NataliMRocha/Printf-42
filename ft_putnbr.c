/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:30:22 by namoreir          #+#    #+#             */
/*   Updated: 2023/08/24 12:37:46 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	long int	i;
	int			size;

	i = nb;
	size = 0;
	if (i < 0)
	{
		ft_putchar('-');
		i *= -1;
		size++;
	}
	if (i >= 10)
		size += ft_putnbr(i / 10);
	size += ft_putchar(i % 10 + '0');
	return (size);
}

int	ft_putnbr_uns(unsigned int nb)
{
	int	size;

	size = 0;
	if (nb >= 10)
		size += ft_putnbr_uns(nb / 10);
	size += ft_putchar(nb % 10 + '0');
	return (size);
}

// #include <stdio.h>
// int main()
// {
// 	int i = 001212;
// 	int result = ft_putnbr(i);
// 	printf("%c", '\n');
// 	printf("%d", result);
// 	printf("%c", '\n');
// 	int result_2 = printf("%d", i);
// 	printf("%c", '\n');
// 	printf("%d", result_2);
// }