/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <made-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:23:38 by made-jes          #+#    #+#             */
/*   Updated: 2024/12/09 16:31:55 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_p(void *ptr)
{
	unsigned long int	address;
	int					count;

	address = (unsigned long int)ptr;
	count = 0;
	if (!ptr)
	{
		count += ft_printf_s("(nil)");
		return (count);
	}
	ft_printf_s("0x");
	count += ft_printf_x(address, "0123456789abcdef") + 2;
	return (count);
}
