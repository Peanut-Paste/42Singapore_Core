# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 12:22:51 by jingtan           #+#    #+#              #
#    Updated: 2023/11/28 16:37:22 by jingtan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= push_swap.c src/utils.c src/utils2.c src/quickSort.c src/stackOperation.c \
			src/solve.c src/stackOperation2.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes
CFLAGS	= -Wall -Wextra -Werror
CC	= gcc
NAME	= push_swap
RM	= rm -f

all	: ${NAME} clean

${NAME}	: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

.c.o	:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}  -I ${INCS}

clean	:
		${RM} ${OBJS}

fclean	: clean
		${RM} ${NAME}

re		: fclean all

.PHONY	: .c.o all clean fclean re
