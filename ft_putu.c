/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzammar <tzammar@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:52:21 by tzammar           #+#    #+#             */
/*   Updated: 2026/02/04 18:53:18 by tzammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_putu(unsigned int nb)
{
	int	sum;

	sum = 0;
	if (nb >= 10)
		sum += ft_putu(nb / 10);
	ft_putchar((nb % 10) + 48);
	sum++;
	return (sum);
}
