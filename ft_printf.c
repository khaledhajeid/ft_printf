/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-haj- <kal-haj-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 21:11:27 by kal-haj-          #+#    #+#             */
/*   Updated: 2025/08/21 18:18:15 by kal-haj-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	white_space(const char *str, int i)
{
	while (str[i + 1] == ' ')
	{
		if (str[i] == '%')
			ft_putchar_printf(' ');
		i++;
	}
	return (i);
}

static int	flags(va_list args, const char *str, int i)
{
	if ((str[i + 1] == 'd' || str[i + 1] == 'i'))
		return (ft_putnbr_printf(va_arg(args, int)));
	else if (str[i + 1] == 'c')
		return (ft_putchar_printf(va_arg(args, int)));
	else if (str[i + 1] == 's')
		return (ft_putstr_printf(va_arg(args, char *)));
	else if (str[i + 1] == '%')
		return (ft_putchar_printf(str[i]));
	else if (str[i + 1] == 'u')
		return (ft_putnbr_unsigned_printf(va_arg(args, unsigned int)));
	else if (str[i + 1] == 'x')
		return (ft_puthex_printf(va_arg(args, unsigned int), 0));
	else if (str[i + 1] == 'X')
		return (ft_puthex_printf(va_arg(args, unsigned int), 1));
	else if (str[i + 1] == 'p')
		return (ft_putptr_printf(va_arg(args, unsigned long)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		num;

	va_start(args, str);
	i = 0;
	num = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == ' ')
			{
				i = white_space(str, i);
				num++;
			}
			num += flags(args, str, i);
			i++;
		}
		else
			num += ft_putchar_printf(str[i]);
		i++;
	}
	va_end(args);
	return (num);
}
