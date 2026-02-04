/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzammar <tzammar@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 16:38:22 by tzammar           #+#    #+#             */
/*   Updated: 2026/02/04 18:51:48 by tzammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"

static int	ft_handle(va_list args, char format)
{
	char	*str;

	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (format == 's')
	{
		str = va_arg(args, char *);
		if (str == NULL)
			return (ft_putstr("(null)"));
		else
			return (ft_putstr(str));
	}
	if (format == 'p')
		return (ft_putptr(va_arg(args, void *)));
	if (format == 'i' || format == 'd')
		return (ft_putnbr(va_arg(args, int)));
	if (format == 'u')
		return (ft_putu(va_arg(args, unsigned int)));
	if (format == 'x' || format == 'X')
		return (ft_puthex(va_arg(args, unsigned int), format));
	return (0);
}

int	ft_printf(const	char	*s, ...)
{
	va_list	args;
	int		x;
	int		sum;

	va_start(args, s);
	x = 0;
	sum = 0;
	while (s[x])
	{
		if (s[x] == '%')
		{
			x++;
			if (s[x] == '%')
				sum += ft_putchar('%');
			else
			{
				sum += ft_handle(args, s[x]);
			}
		}
		else
			sum += ft_putchar(s[x]);
		x++;
	}
	va_end(args);
	return (sum);
}
