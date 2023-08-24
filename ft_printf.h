/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natali <natali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:05:40 by namoreir          #+#    #+#             */
/*   Updated: 2023/08/23 22:27:36 by natali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

size_t ft_printf(const char *, ...);
size_t	ft_putchar(char c);
size_t	ft_putstr(char *str);
size_t	ft_putnbr(int nb);
size_t	ft_putnbr_hx_lower(unsigned int hx);
size_t	ft_putnbr_hx_upper(unsigned int hx);
size_t	ft_putnbr_uns(unsigned int nb);
size_t	ft_putptr(unsigned long int ptr);

#endif
