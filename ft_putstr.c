/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pminialg <pminialg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/27 11:41:28 by pminialg      #+#    #+#                 */
/*   Updated: 2023/10/30 13:57:25 by pminialg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *c)
{
	int	len;

	len = 0;
	if (c == NULL)
		return (ft_putstr("(null)"));
	while (c[len])
	{
		ft_putchar(c[len]);
		len++;
	}
	return (len);
}
