/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: pminialg <pminialg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/27 12:01:44 by pminialg      #+#    #+#                 */
/*   Updated: 2023/11/16 09:42:31 by pminialg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base == NULL)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base_recursive(unsigned long long nb, unsigned int len,
char *base, int *length)
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
		ft_putnbr_base_recursive((nb / len), len, base, length);
		ft_putnbr_base_recursive((nb % len), len, base, length);
	}
}

int	ft_putnbr_base(unsigned long long nbr, char *base)
{
	int			len;
	long long	nb;
	int			length;

	len = ft_strlen(base);
	nb = nbr;
	length = 0;
	if (check_error(base) && len != 1)
	{
		ft_putnbr_base_recursive(nb, len, base, &length);
	}
	return (length);
}
