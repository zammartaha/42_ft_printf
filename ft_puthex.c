/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzammar <tzammar@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:03:41 by tzammar           #+#    #+#             */
/*   Updated: 2026/02/04 18:53:12 by tzammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_puthex(unsigned int num, char format)
{
	char	*base;
	int		sum;

	sum = 0;
	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (num >= 16)
		sum += ft_puthex(num / 16, format);
	sum++;
	ft_putchar(base[num % 16]);
	return (sum);
}
