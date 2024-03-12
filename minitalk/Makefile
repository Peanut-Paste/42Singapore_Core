# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 12:22:51 by jingtan           #+#    #+#              #
#    Updated: 2023/09/14 19:12:43 by jingtan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c ft_printf_logic.c ft_printf_utils.c ft_printf_utils2.c
OBJS	= ${SRCS:.c=.o}
LIBFT	= ./libft
LIBFT_NAME = ${LIBFT}/libft.a
CFLAGS	= -Wall -Wextra -Werror
CC	= gcc
NAME	= libftprintf.a
RM	= rm -f

ifeq ($(OS),Windows_NT)
    RM = del /f
endif

.c.o	:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${LIBFT} -I./ -L${LIBFT} -llibft

${LIBFT_NAME}	:
			make -C ${LIBFT} all

${NAME}	: ${LIBFT_NAME} ${OBJS}
	cp ${LIBFT_NAME} ${NAME}
	ar rcs ${NAME} ${OBJS}

all	: ${NAME}

test	: 
	${CC} ${CFLAGS} ${SRCSMAIN} ${SRCS} -I ${INCS} -L ${LIBFT} -lft

clean	:
		${RM} ${OBJS} ${BONUS_OBJS}

fclean	: clean
		${RM} ${NAME}

re		: fclean all

.PHONY	: .c.o all clean fclean re
