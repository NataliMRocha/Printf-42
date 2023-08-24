/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:12:31 by namoreir          #+#    #+#             */
/*   Updated: 2023/08/24 12:43:00 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* int	ft_putchar(char c)
{
	size_t	size;

	write(1, &c, 1);
	size = 1;
	
	return (size);
} */

int	ft_putptr(unsigned long int ptr)
{
	char		*base;
	int			size;

	if ((void *)ptr == NULL || ptr == 0)
	{
		write(1, "(nil)", 5);
		size = 5;
		return (size);
	}
	base = "0123456789abcdef";
	size = 0;
	if (ptr < 16)
	{
		write(1, "0x", 2);
		size = 2;
		size += ft_putchar(base[ptr % 16]);
	}
	else if (ptr >= 16)
	{
		size += ft_putptr(ptr / 16);
		size += ft_putchar(base[ptr % 16]);
	}
	return (size);
}
/* #include <stdio.h>

int main()
{
	char *teste = "natali";
	char *teste2 = "";
	char *teste3 = "NATALI 1253333";
	char *teste4 = NULL;
	void *teste5;
	
	int result = ft_putptr(teste);
	printf("\n%i\n", result);
	int result_p = printf("%p", teste);
	printf("\n%i\n", result_p);
	
	int result2 = ft_putptr(teste2);
	printf("\n%i\n", result2);
	int result_p2 = printf("%p", teste2);
	printf("\n%i\n", result_p2);
	
	int result3 = ft_putptr(teste3);
	printf("\n%i\n", result3);
	int result_p3 = printf("%p", teste3);
	printf("\n%i\n", result_p3);
	
	int result4 = ft_putptr(teste4);
	printf("\n%i\n", result4);
	int result_p4 = printf("%p", teste4);
	printf("\n%i\n", result_p4);
	
	int result5 = ft_putptr(teste5);
	printf("\n%i\n", result5);
	int result_p5 = printf("%p", teste5);
	printf("\n%i\n", result_p5);
} */