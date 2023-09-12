# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/06 00:01:01 by jingtan           #+#    #+#              #
#    Updated: 2023/09/12 20:02:44 by jingtan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	  ft_isprint.c ft_strlcpy.c ft_strlen.c ft_strlcat.c ft_strncmp.c \
	  ft_strnstr.c ft_strchr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
	  ft_memset.c ft_bzero.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memmove.c \
	  ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	  ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	  ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	  ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS_SRCS	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		  ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		 ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c 
OBJS	= ${SRCS:.c=.o}
BONUS_OBJS	= ${BONUS_SRCS:.c=.o}
CFLAGS	= -Wall -Wextra -Werror
CC	= gcc
NAME	= libft.a
RM	= rm -f

ifeq ($(OS),Windows_NT)
    RM = del /f
endif

${NAME}	: ${OBJS}
	${CC} ${CFLAGS} -c ${SRCS} -I./
	ar rcs ${NAME} ${OBJS}

all	: ${NAME}

clean	:
		${RM} ${OBJS} ${BONUS_OBJS}

bonus	: ${NAME} ${BONUS_OBJS}
	${CC} ${CFLAGS} -c ${BONUS_SRCS} -I./
	ar rcs ${NAME} ${BONUS_OBJS}

fclean	: clean
		${RM} ${NAME}

re		: fclean all

.PHONY	: .c.o all clean fclean re
