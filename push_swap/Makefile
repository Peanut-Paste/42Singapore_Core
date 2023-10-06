# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 12:22:51 by jingtan           #+#    #+#              #
#    Updated: 2023/10/06 12:12:16 by jingtan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= push_swap.c ps_utils.c ps_logic.c
OBJS	= ${SRCS:.c=.o}
LIBFT	= ./libft
LIBFT_NAME = ${LIBFT}/libft.a
CFLAGS	= -Wall -Wextra -Werror
CC	= gcc
NAME	= push_swap
RM	= rm -f

all	: ${NAME}

${NAME}	: ${LIBFT_NAME} ${OBJS} 
	${CC} ${CFLAGS} ${OBJS} -o ${NAME} -L${LIBFT} -lft -lc

.c.o	:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${LIBFT} -I./ 

${LIBFT_NAME}	:
			make -C ${LIBFT} all

clean	:
		${RM} ${OBJS} ${BONUS_OBJS}
		make -C ${LIBFT} clean

fclean	: clean
		${RM} ${NAME}
		make -C ${LIBFT} fclean

re		: fclean all

.PHONY	: .c.o all clean fclean re
