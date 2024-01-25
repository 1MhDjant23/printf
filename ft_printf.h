/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mait-taj <mait-taj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 03:47:45 by mait-taj          #+#    #+#             */
/*   Updated: 2024/01/23 21:28:40 by mait-taj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

size_t	n_to_hexa(unsigned int n, char c);
size_t	ft_printf(const char *str, ...);
size_t	ft_putchar(char c);
size_t	ft_putstr(const char *str);
size_t	ft_putnb(int x);
size_t	strchr_c(char const *str, char c);
size_t	uns_to_dec(unsigned int x);
size_t	ft_putaddress(void *address);
#endif
