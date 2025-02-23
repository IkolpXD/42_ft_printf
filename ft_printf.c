/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <made-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:36:41 by made-jes          #+#    #+#             */
/*   Updated: 2025/02/23 11:03:56 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	if (!format)
		return (-1);
	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += conversions(format, ap);
		}
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}

int	conversions(const char	*format, va_list ap)
{
	if (*format == 'c')
		return (ft_printf_c(va_arg(ap, int)));
	else if (*format == 's')
		return (ft_printf_s(va_arg(ap, char *)));
	else if (*format == 'p')
		return (ft_printf_p(va_arg(ap, void *)));
	else if (*format == 'd' || *format == 'i')
		return (ft_printf_diu(va_arg(ap, int), 1));
	else if (*format == 'u')
		return (ft_printf_diu(va_arg(ap, unsigned int), 0));
	else if (*format == 'x')
		return (ft_printf_x(va_arg(ap, unsigned int), "0123456789abcdef"));
	else if (*format == 'X')
		return (ft_printf_x(va_arg(ap, unsigned int), "0123456789ABCDEF"));
	else if (*format == '%')
		return (ft_printf_c('%'));
	return (-1);
}
