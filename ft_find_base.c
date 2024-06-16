/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pminialg <pminialg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/27 15:39:34 by pminialg      #+#    #+#                 */
/*   Updated: 2023/11/09 12:12:19 by pminialg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_find_base(long long nbr, char c)
{
	int	len;

	len = 0;
	if (c == 'x')
		len += ft_putnbr_base(nbr, "0123456789abcdef");
	else
		len += ft_putnbr_base(nbr, "0123456789ABCDEF");
	return (len);
}
