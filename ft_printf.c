/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:42:58 by mait-taj          #+#    #+#             */
/*   Updated: 2024/01/23 21:10:13 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	check_str(va_list args, char c)
{
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 'd' || c == 'i')
		return (ft_putnb(va_arg(args, int)));
	else if (c == 'X' || c == 'x')
		return (n_to_hexa(va_arg(args, unsigned int), c));
	else if (c == 'u')
		return (uns_to_dec(va_arg(args, unsigned int)));
	else if (c == 'p')
		return (ft_putaddress(va_arg(args, void *)));
	else
		return (ft_putchar('%'));
}

size_t	ft_printf(const char *str, ...)
{
	size_t	count;
	va_list	args;

	count = 0;
	if (*str == '%' && *(str + 1) == '\0')
		return (count);
	va_start(args, str);
	while (*str)
	{
		if ((*str == '%') && (strchr_c("cspdiuxX%", *(str + 1))))
		{
			str++;
			count += check_str(args, *str);
		}
		else
			count += ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (count);
}
