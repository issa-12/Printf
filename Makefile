# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isalayan <isalayan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/19 15:20:37 by isalayan          #+#    #+#              #
#    Updated: 2024/06/20 10:05:57 by isalayan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= clang
CFLAGS	= -Wall -Wextra -Werror
RM		= /bin/rm -f

NAME	= libftprintf.a

INCLUDE_PATH += -I./utils

SRCS	= ft_printf.c ./utils/ft_abs.c ./utils/ft_putaddress.c \
		   ./utils/ft_putchar.c ./utils/ft_puthexa.c\
		  ./utils/ft_putnbr.c ./utils/ft_putstr.c\
		  ./utils/ft_putunsigned.c ./utils/ft_strlen.c ./utils/ft_strchr.c

OBJS	= $(SRCS:.c=.o)

.c.o:
			@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			@ar -rcs $(NAME) $(OBJS)

bonus:		all

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

rebonus:	fclean bonus

.PHONY:		all clean fclean re bonus rebonus
