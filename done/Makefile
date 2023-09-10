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
	  ft_strlcpy.c ft_strlen.c ft_strlcat.c ft_strncmp.c ft_strnstr.c ft_strchr.c\
	  ft_strrchr.c ft_tolower.c ft_toupper.c ft_memset.c ft_bzero.c ft_memcpy.c\
	  ft_memchr.c ft_memcmp.c ft_memmove.c ft_calloc.c ft_strdup.c
OBJS	= ${SRCS:.c=.o}
HEADER	= libft.h
CFLAGS	= -Wall -Wextra -Werror
CC	= gcc
NAME	= libft.a
RM	= rm -f

ifeq ($(OS),Windows_NT)
    RM = del /f
endif

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
