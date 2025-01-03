/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <made-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:23:38 by made-jes          #+#    #+#             */
/*   Updated: 2024/11/27 16:38:14 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (*str)
		count += ft_printf_c(*str++);
	return (count);
}
