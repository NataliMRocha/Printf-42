/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:05:40 by namoreir          #+#    #+#             */
/*   Updated: 2023/08/23 16:26:11 by namoreir         ###   ########.fr       */
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

// You have to implement the following conversions:
// • %c Prints a single character.
// • %s Prints a string (as defined by the common C convention).
// • %d Prints a decimal (base 10) number.
// • %x Prints a number in hexadecimal (base 16) lowercase format.
// • %X Prints a number in hexadecimal (base 16) uppercase format.
// • %% Prints a percent sign.
// • %i Prints an integer in base 10.
// • %u Prints an unsigned decimal (base 10) number.

// • %p The void * pointer argument has to be printed in hexadecimal format.