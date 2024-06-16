/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   format_finder.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pminialg <pminialg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/27 09:35:44 by pminialg      #+#    #+#                 */
/*   Updated: 2023/11/10 09:06:38 by pminialg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base_recursive_number(long long nb, int len, char *base,
int *length)
{
	if (nb < 0)
	{
		(*length) += ft_putchar('-');
		nb *= -1;
	}
	if (nb < len)
	{
		(*length) += ft_putchar(base[nb]);
	}
	if (nb >= len)
	{
		ft_putnbr_base_recursive_number((nb / len), len, base, length);
		ft_putnbr_base_recursive_number((nb % len), len, base, length);
	}
}

int	ft_putnbr_base_number(long long nbr, char *base)
{
	int			len;
	long long	nb;
	int			length;

	len = ft_strlen(base);
	nb = nbr;
	length = 0;
	if (check_error(base) && len != 1)
	{
		ft_putnbr_base_recursive_number(nb, len, base, &length);
	}
	return (length);
}
