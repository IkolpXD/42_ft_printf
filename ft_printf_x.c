/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <made-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:23:38 by made-jes          #+#    #+#             */
/*   Updated: 2024/11/27 16:38:14 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_x(unsigned long int num, const char *hex_digits)
{
	int	count;

	count = 0;
	if (num >= 16)
		count += ft_printf_x(num / 16, hex_digits);
	count += ft_printf_c(hex_digits[num % 16]);
	return (count);
}
