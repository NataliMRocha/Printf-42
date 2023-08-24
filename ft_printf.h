/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:05:40 by namoreir          #+#    #+#             */
/*   Updated: 2023/08/24 12:39:48 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_putnbr_uns(unsigned int nb);
int	ft_putnbr_hx_lower(unsigned int hx);
int	ft_putnbr_hx_upper(unsigned int hx);
int	ft_putptr(unsigned long int ptr);
int	ft_checkformat(const char *format, va_list	argptr, int size);

#endif