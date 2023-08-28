/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natali <natali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:06:39 by namoreir          #+#    #+#             */
/*   Updated: 2023/08/26 09:13:01 by natali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

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
