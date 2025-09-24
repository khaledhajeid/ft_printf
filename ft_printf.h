/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kal-haj- <kal-haj-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 21:11:40 by kal-haj-          #+#    #+#             */
/*   Updated: 2025/08/21 18:07:15 by kal-haj-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int				ft_printf(const char *str, ...);
int				ft_puthex_printf(unsigned long n, int uppercase);
int				ft_putchar_printf(char c);
int				ft_putnbr_printf(int n);
unsigned int	ft_putnbr_unsigned_printf(unsigned int n);
int				ft_putptr_printf(unsigned long n);
int				ft_putstr_printf(char *s);

#endif
