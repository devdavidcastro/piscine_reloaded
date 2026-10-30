# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: castro <castro@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/28 11:18:38 by castro            #+#    #+#              #
#    Updated: 2026/10/30 14:58:55 by castro           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRCS = srcs/ft_putchar.c \
       srcs/ft_putstr.c \
       srcs/ft_strcmp.c \
       srcs/ft_strlen.c \
       srcs/ft_swap.c

OBJS = ${SRCS:.c=.o}

.c.o:
	${CC} ${CFLAGS} -c $< -o < ${<:.c=.o}

$(NAME): ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

.PHONY: all clean fclean


