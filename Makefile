# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kal-haj- <kal-haj-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/09 20:26:47 by kal-haj-          #+#    #+#              #
#    Updated: 2025/08/20 17:33:50 by kal-haj-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= cc
CFLAGS	= -Wall -Wextra -Werror
NAME	= libftprintf.a
SRC	= ft_printf.c \
	ft_printhex_printf.c \
	ft_putchar_printf.c \
	ft_putnbr_printf.c \
	ft_putnbr_unsigned_printf.c \
	ft_putptr_printf.c \
	ft_putstr_printf.c

OBJ	= $(SRC:.c=.o)

all:	$(NAME)
$(NAME):	$(OBJ)
	ar rcs $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
fclean:	clean 
	rm -f $(NAME)
re:	fclean $(NAME)


.PHONY: clean all fclean re
