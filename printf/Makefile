# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 12:22:51 by jingtan           #+#    #+#              #
#    Updated: 2023/09/13 12:22:51 by jingtan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCSFILE	= main.c
SRCSPATH	= ./srcs/
SRCS	= ${addprefix ${SRCSPATH}, ${SRCSFILE}}
LIBFT	= libft
BONUS_SRCS	= 
OBJS	= ${SRCS:.c=.o}
BONUS_OBJS	= ${BONUS_SRCS:.c=.o}
CFLAGS	= -Wall -Wextra -Werror
CC	= gcc
NAME	= libftprintf.a
RM	= rm -f
INCS	= includes

ifeq ($(OS),Windows_NT)
    RM = del /f
endif

${NAME}	: ${OBJS}
	${CC} ${CFLAGS} -c ${SRCS} -I ${INCS} -L ${LIBFT} -lft
	ar rcs ${NAME} ${OBJS}

all	: ${NAME}

test	: 
	${CC} ${CFLAGS} ${SRCS} -I ${INCS} -L ${LIBFT} -lft

bonus	: ${NAME} ${BONUS_OBJS}
	${CC} ${CFLAGS} -c ${BONUS_SRCS} -I ${INCS} -L ${LIBFT} -lft
	ar rcs ${NAME} ${BONUS_OBJS}

clean	:
		${RM} ${OBJS} ${BONUS_OBJS}

fclean	: clean
		${RM} ${NAME}

re		: fclean all

.PHONY	: all clean fclean re