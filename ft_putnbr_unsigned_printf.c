/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_printf.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-haj- <kal-haj-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 21:12:04 by kal-haj-          #+#    #+#             */
/*   Updated: 2025/08/21 18:17:54 by kal-haj-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	length(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

unsigned int	ft_putnbr_unsigned_printf(unsigned int n)
{
	char			x;
	unsigned int	num;

	num = length(n);
	if (n >= 10)
	{
		ft_putnbr_unsigned_printf(n / 10);
	}
	x = (n % 10) + '0';
	write(1, &x, 1);
	return (num);
}
