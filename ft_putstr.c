/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:06:28 by namoreir          #+#    #+#             */
/*   Updated: 2023/08/23 15:53:41 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putstr(char *str)
{
	size_t	size;

	size = 0;
	if (!str)
		return (0);
	while(*str)
	{
		size+= ft_putchar(*str);
		str++;
	}
	return (size);
}

// #include <stdio.h>
// int main()
// {
// 	char *line = "Natali é linda =)";
// 	int size = ft_putstr(line);
// 	printf("\n%d\n", size);
// 	int result = printf("%s", line);
// 	printf("%c", '\n');
// 	printf("%i", result);
// }
