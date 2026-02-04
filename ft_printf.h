/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzammar <tzammar@student.42beirut.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 17:32:08 by tzammar           #+#    #+#             */
/*   Updated: 2025/08/02 17:32:08 by tzammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>

int	ft_puthex(unsigned int num, char format);
int	ft_puthex_long(unsigned long num, char format);
int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putstr(char *s);
int	ft_putu(unsigned int nb);
int	ft_putptr(void *ptr);
int	ft_printf(const	char	*s, ...);

#endif
