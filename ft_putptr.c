/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzammar <tzammar@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 17:33:45 by tzammar           #+#    #+#             */
/*   Updated: 2026/02/04 18:53:15 by tzammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long	nbr;
	int				sum;

	nbr = (unsigned long)ptr;
	sum = 0;
	if (nbr == 0)
		sum += ft_putstr("(nil)");
	else
	{
		sum += ft_putstr("0x");
		sum += ft_puthex_long(nbr, 'x');
	}
	return (sum);
}
