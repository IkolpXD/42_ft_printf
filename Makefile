# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: made-jes <made-jes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 16:43:31 by made-jes          #+#    #+#              #
#    Updated: 2024/11/27 16:52:35 by made-jes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCES = ft_printf_c.c ft_printf_s.c ft_printf_p.c ft_printf_x.c \
			ft_printf.c ft_printf_diu.c

OBJECTS = $(SOURCES:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
