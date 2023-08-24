/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:50:19 by namoreir          #+#    #+#             */
/*   Updated: 2023/08/24 12:40:26 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		size;
	va_list	argptr;

	size = 0;
	va_start(argptr, format);
	while (format)
		size = ft_checkformat(format, argptr, size);
	va_end(argptr);
	return (size);
}
