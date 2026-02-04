# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tzammar <tzammar@student.42beirut.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/27 11:29:26 by tzammar           #+#    #+#              #
#    Updated: 2026/02/04 18:53:20 by tzammar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC      := cc
CFLAGS  := -Wall -Wextra -Werror
AR      := ar rcs
RM      := rm -f

SRCS    := ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c \
			ft_putstr.c ft_putu.c ft_putptr.c ft_puthex_long.c

OBJS    := $(SRCS:.c=.o)

NAME    := libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Creating library $(NAME)"
	$(AR) $(NAME) $(OBJS)

%.o: %.c libftprintf.h
	@echo "Compiling $<"
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Removing object files"
	$(RM) $(OBJS)

fclean: clean
	@echo "Removing library $(NAME)"
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re