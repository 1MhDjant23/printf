/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 23:29:57 by mait-taj          #+#    #+#             */
/*   Updated: 2024/01/23 21:14:43 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putaddress(void *address)
{
	size_t			count;
	char			addr;
	char			*hexa;
	unsigned long	num;
	void			*ptr;

	num = (unsigned long)address;
	hexa = "0123456789abcdef";
	count = 0;
	if (num <= 15)
		count += ft_putstr("0x");
	ptr = (void *)(num / 16);
	if (num > 15)
		count += ft_putaddress(ptr);
	addr = hexa[num % 16];
	count += ft_putchar(addr);
	return (count);
}
