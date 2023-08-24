/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:06:28 by namoreir          #+#    #+#             */
/*   Updated: 2023/08/24 12:55:00 by namoreir         ###   ########.fr       */
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

int	ft_putstr(char *str)
{
	int	size;
	int	i;

	size = 0;
	if (str)
	{
		i = 0;
		while (str[i])
		{
			size += ft_putchar(str[i]);
			i++;
		}
	}
	else
		size += ft_putstr("(null)");
	return (size);
}

// #include <stdio.h>
// int main()
// {
// 	char *line = 0;
// 	int size = ft_putstr(line);
// 	printf("\n%d\n", size);
// 	int result = printf("%s", line);
// 	printf("%c", '\n');
// 	printf("%i", result);
// }
