/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzammar <tzammar@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:54:39 by tzammar           #+#    #+#             */
/*   Updated: 2026/02/04 18:53:14 by tzammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

static int	ft_int_to_str(int nb, int sum)
{
	int	buffer[12];
	int	i;

	i = 0;
	while (nb > 0)
	{
		buffer[i] = (nb % 10 + '0');
		nb /= 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		write(1, &buffer[i], 1);
		sum ++;
	}
	return (sum);
}

int	ft_putnbr(int nb)
{
	int	sum;

	sum = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		sum += 11;
		return (sum);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		sum++;
		nb = -nb;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		sum++;
		return (sum);
	}
	return (ft_int_to_str(nb, sum));
}
// int	main(void)
// {
// 	ft_putnbr_1(-313, 1);
// 	return (0);
// }
