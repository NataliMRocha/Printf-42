/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:06:39 by namoreir          #+#    #+#             */
/*   Updated: 2023/08/24 12:51:27 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	int	size;

	write(1, &c, 1);
	size = 1;
	return (size);
}

// #include <stdio.h>
// int main()
// {
// 	char c = 0;
// 	int size = ft_putchar(c);
// 	printf("%c", '\n');
// 	printf("%i", size);
// 	printf("%c", '\n');
// 	int result = printf("%c", c);
// 	printf("%c", '\n');
// 	printf("%i", result);
// }