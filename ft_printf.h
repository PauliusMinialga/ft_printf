/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pminialg <pminialg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/27 09:32:02 by pminialg      #+#    #+#                 */
/*   Updated: 2023/11/15 14:54:03 by pminialg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

int		ft_putchar(char c);
int		ft_putstr(char *c);
int		ft_printf(const char *format, ...);
int		format_finder(va_list args, const char format);
int		ft_putnbr_base(unsigned long long nbr, char *base);
int		check_error(char *base);
// int		ft_strlen(char *c);
int		ft_find_base(long long nbr, char c);
int		ft_print_pointer(unsigned long long nbr);
int		ft_check_unsigned(unsigned long num);
int		ft_check_number(int num);
void	ft_putnbr_base_recursive(unsigned long long nb, unsigned int len,
			char *base, int *length);
int		ft_putnbr_base_number(long long nbr, char *base);
void	ft_putnbr_base_recursive_number(long long nb, int len, char *base,
			int *length);
// char	*ft_strchr(const char *str, int c);
#endif