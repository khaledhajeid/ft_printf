/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-haj- <kal-haj-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 21:11:33 by kal-haj-          #+#    #+#             */
/*   Updated: 2025/08/21 17:20:44 by kal-haj-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_printf(char *s)
{
	int	counter;

	counter = 0;
	if (!s)
		s = "(null)";
	while (s[counter] != '\0')
	{
		counter++;
	}
	write(1, s, counter);
	return (counter);
}
