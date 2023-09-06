# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 00:01:01 by jingtan           #+#    #+#              #
#    Updated: 2023/09/06 17:25:10 by jingtan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
	  ft_strlcpy.c ft_strlen.c ft_strlcat.c ft_strncmp.c ft_strnstr.c
OBJS	= ${SRCS:.c=.o}
CFLAGS	= -Wall -Wextra -Werror
CC	= gcc
NAME	= libft.a
RM	= rm -f

.c.o	:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}	: ${OBJS}
	ar rcs ${NAME} ${OBJS} ${HEADER}

all		: ${NAME}

clean	:
		${RM} ${OBJS}

fclean	: clean
		${RM} ${NAME}

re		: fclean all

.PHONY	: .c.o all clean fclean re
