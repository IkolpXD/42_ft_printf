/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-jes <made-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:17:39 by made-jes          #+#    #+#             */
/*   Updated: 2024/12/09 16:31:44 by made-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>
# include <stdint.h>

int	ft_printf(const char *format, ...);
int	conversions(const char	*format, va_list ap);
int	ft_printf_c(char c);
int	ft_printf_s(char *str);
int	ft_printf_x(unsigned long int num, const char *hex_digits);
int	ft_printf_p(void *ptr);
int	ft_printf_diu(long long int n, int is_signed);

#endif