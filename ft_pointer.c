/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_pointer.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pminialg <pminialg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/27 15:44:17 by pminialg      #+#    #+#                 */
/*   Updated: 2023/11/10 09:13:34 by pminialg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long long ptr)
{
	int	len;
	int	ptr_len;

	len = 0;
	ptr_len = 0;
	if (ptr == 0)
	{
		len += ft_putstr("(nil)");
	}
	else
	{
		len += ft_putstr("0x");
		len += ft_putnbr_base(ptr, "0123456789abcdef");
	}
	return (len);
}
