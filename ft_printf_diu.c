/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_diu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <made-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:23:38 by made-jes          #+#    #+#             */
/*   Updated: 2024/11/27 16:38:14 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_diu(long long int n, int is_signed)
{
	int	count;

	count = 0;
	if (is_signed && n < 0)
	{
		ft_printf_c('-');
		n = -n;
		count++;
	}
	if (n >= 10)
		count += ft_printf_diu(n / 10, is_signed);
	ft_printf_c(n % 10 + '0');
	count++;
	return (count);
}
