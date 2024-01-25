/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uns_to_dec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 04:33:07 by mait-taj          #+#    #+#             */
/*   Updated: 2024/01/23 21:59:53 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	uns_to_dec(unsigned int x)
{
	char			*unsi;
	unsigned char	u;
	size_t			i;

	i = 0;
	unsi = "0123456789";
	if (x >= 10)
		i += uns_to_dec(x / 10);
	u = unsi[x % 10];
	i += ft_putchar(u);
	return (i);
}
