# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 00:01:01 by jingtan           #+#    #+#              #
#    Updated: 2023/09/06 00:01:01 by jingtan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= *.c
OBJS	= ${SRCS:.c=.o}
INCS	= libft.h
CFLAGS	= -Wall -Wextra -Werror
CC		= gcc
NAME	= libft.a
RM		= rm -f

.c.o	:
	${CC} ${CFLAGS} -c ${SRCS} -I ${INCS} -o ${OBJS}

${NAME}	: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all		: ${NAME}

clean	:
		${RM} ${OBJS}

fclean	: clean
		${RM} ${NAME}

re		: fclean all

.PHONY	: .c.o all clean fclean re