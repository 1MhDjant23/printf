/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_to_hexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 01:53:26 by mait-taj          #+#    #+#             */
/*   Updated: 2024/01/23 21:21:27 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	n_to_hexa(unsigned int n, char c)
{
	size_t			count;
	char			*base_sixt;
	char			hexa;
	unsigned int	len_base;

	count = 0;
	len_base = 16;
	if (c == 'x')
		base_sixt = "0123456789abcdef";
	else
		base_sixt = "0123456789ABCDEF";
	if (n > 15)
		count += n_to_hexa(n / len_base, c);
	hexa = base_sixt[n % len_base];
	count += write(1, &hexa, 1);
	return (count);
}
