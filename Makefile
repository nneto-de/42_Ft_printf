# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nneto-de <nneto-de@student.42porto.com     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 10:48:12 by nneto-de          #+#    #+#              #
#    Updated: 2023/05/13 14:56:08 by nneto-de         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_itoa.c ft_printf.c ft_putchar.c ft_puthexa_lower.c ft_puthexa_upper.c \
		ft_putnbr.c ft_putstr.c ft_strchr.c ft_puthexa_void.c ft_put_uns_nbr.c ft_utoa.c \
		ft_put.c \
		
OBJS = ${SRC:.c=.o}

CC = cc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror
.c.o:
		${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}
		
INCLUDE = -I .

$(NAME): ${OBJS}
				ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean: 
		${RM} ${OBJS}

fclean: clean
				${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re
