/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pminialg <pminialg@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/26 14:42:38 by pminialg      #+#    #+#                 */
/*   Updated: 2023/11/16 09:36:45 by pminialg      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_finder(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		len += ft_print_pointer(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		len += ft_check_number(va_arg(args, int));
	else if (format == 'u')
		len += ft_check_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_find_base(va_arg(args, unsigned int), format);
	else if (format == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			len += format_finder(args, format[i + 1]);
			if (!ft_strchr("cspdiuxX%", format[i + 1]))
				len += ft_putchar(format[i]) + ft_putchar(format[i + 1]);
			i += 2;
		}
		else
			len += ft_putchar(format[i++]);
	}
	va_end(args);
	return (len);
}
