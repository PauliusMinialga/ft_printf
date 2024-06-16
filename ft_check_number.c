/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check_number.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: pminialg <pminialg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/30 13:37:36 by pminialg      #+#    #+#                 */
/*   Updated: 2023/11/09 12:31:12 by pminialg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_number(int num)
{
	int	len;

	len = 0;
	len += ft_putnbr_base_number(num, "0123456789");
	return (len);
}
