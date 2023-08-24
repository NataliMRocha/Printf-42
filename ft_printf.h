/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:05:40 by namoreir          #+#    #+#             */
/*   Updated: 2023/08/24 16:08:12 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

/**@brief Repeat the behavior of the printf fuction
 * 
 * @param format the format of conversion to do and all arguments passed
 * @return the amount of bytes that were written
*/
int	ft_printf(const char *format, ...);

/**@brief Receives the format and checks if it is a conversion
 * to handle and if it is true, passes the respective argument
 * to the conversion function
 * 
 * @param type the format to check
 * @param arg the list of arguments
 * @return the amount of bytes that were written
*/
int	ft_checkformat(char type, va_list arg);

/**@brief Outputs the character 'c' in the standard output.
 * 
 * @param c the character to output
 * @return the amount of bytes that were written
*/
int	ft_putchar(char c);

/**@brief Outputs the string 'str' in the standard output.
 * 
 * @param str the string to output
 * @return the amount of bytes that were written
*/
int	ft_putstr(char *str);

/**@brief Outputs the integer 'nb' in the standard output.
 * 
 * @param nb the integer to output
 * @return the amount of bytes that were written
*/
int	ft_putnbr(int nb);

/**@brief Outputs the unsigned integer 'nb' in the standard output.
 * 
 * @param nb the integer to output
 * @return the amount of bytes that were written
*/
int	ft_putnbr_uns(unsigned int nb);

/**@brief Outputs the hexadecimal integer 'hx' in the standard output.
 * 
 * @param hx the integer to output
 * @param base the base of the hexadecimal number
 * @return the amount of bytes that were written
*/
int	ft_putnbr_hx(unsigned int hx, char *base);

/**@brief Outputs the pointer adress 'ptr' in the standard output.
 * 
 * @param ptr the integer to output
 * @param base the base of the hexadecimal number
 * @return the amount of bytes that were written
*/
int	ft_putptr(unsigned long ptr, char *base);

#endif