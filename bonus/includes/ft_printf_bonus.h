/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namoreir <namoreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:05:40 by namoreir          #+#    #+#             */
/*   Updated: 2023/09/04 11:18:25 by namoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <unistd.h>
# include <stdarg.h>

typedef struct s_sizes{
	int	i;
	int	size;
}	t_sizes;

/**@brief Repeat the behavior of the printf fuction
 * 
 * @param format the format of conversion to do and all arguments passed
 * @return the amount of bytes that were written
*/
int		ft_printf(const char *format, ...);

/**@brief Receives the format and checks if it is a conversion
 * to handle and if it is true, passes the respective argument
 * to the conversion function
 * 
 * @param type the format to check
 * @param arg the list of arguments
 * @return the amount of bytes that were written
*/
int		ft_checkformat(char type, va_list arg);

/**@brief Outputs the character 'c' in the standard output.
 * 
 * @param c the character to output
 * @return the amount of bytes that were written
*/
int		ft_putchar(char c);

/**@brief Outputs the string 'str' in the standard output.
 * 
 * @param str the string to output
 * @return the amount of bytes that were written
*/
int		ft_putstr(char *str);

/**@brief Outputs the integer 'nb' in the standard output.
 * 
 * @param nb the integer to output
 * @return the amount of bytes that were written
*/
int		ft_putnbr(int nb);

/**@brief Outputs the unsigned integer 'nb' in the standard output.
 * 
 * @param nb the integer to output
 * @return the amount of bytes that were written
*/
int		ft_putnbr_uns(unsigned int nb);

/**@brief Outputs the hexadecimal integer 'hx' in the standard output.
 * 
 * @param hx the integer to output
 * @param base the base of the hexadecimal number
 * @return the amount of bytes that were written
*/
int		ft_putnbr_hx(unsigned int hx, char *base);

/**@brief Outputs the pointer adress 'ptr' in the standard output.
 * 
 * @param ptr the integer to output
 * @param base the base of the hexadecimal number
 * @return the amount of bytes that were written
*/
int		ft_putptr(unsigned long ptr, char *base);

/**@brief Handles with the space flag
 * 
 * @param format the the format of conversion to do and
 * all arguments passed
 * @param size the struct with the index and size
 * @param arg the argument to be printed
*/
void	ft_space(const char *format, t_sizes *sizes, va_list arg);

/**@brief Handles with the hash flag
 * 
 * @param format the format of conversion to do and
 * all arguments passed
 * @param size the struct with the index and size
 * @param arg the argument to be printed
*/
void	ft_hash(const char *format, t_sizes *sizes, va_list arg);

#endif