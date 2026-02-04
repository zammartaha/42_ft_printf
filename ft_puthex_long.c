/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_long.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzammar <tzammar@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 20:41:11 by tzammar           #+#    #+#             */
/*   Updated: 2026/02/04 18:53:11 by tzammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_puthex_long(unsigned long num, char format)
{
	char	*base;
	int		sum;

	sum = 0;
	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (num >= 16)
		sum += ft_puthex_long(num / 16, format);
	sum++;
	ft_putchar(base[num % 16]);
	return (sum);
}
