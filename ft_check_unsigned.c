/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_unsigned.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: pminialg <pminialg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/30 13:38:57 by pminialg      #+#    #+#                 */
/*   Updated: 2023/11/09 12:16:51 by pminialg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_unsigned(unsigned long num)
{
	int	len;

	len = 0;
	if (num < 0)
		len += ft_putstr("(nil)");
	else
		len += ft_putnbr_base(num, "0123456789");
	return (len);
}
