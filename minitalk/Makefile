# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 12:22:51 by jingtan           #+#    #+#              #
#    Updated: 2024/03/18 10:49:52 by jingtan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= minitalk
UTILFILES	= ./utils/utils.c ./utils/mem_utils.c
INCL	= include
CFLAGS	= -Wall -Wextra -Werror
CC	= cc
RM	= rm -f

SERVERFILE = ${UTILFILES} ./ft_server/ft_server.c
SERVERNAME	= server

CLIENTFILE	= ${UTILFILES} ./ft_client/ft_client.c
CLIENTNAME	= client

SERVEROBJS	= ${SERVERFILE:.c=.o}
CLIENTOBJS	= ${CLIENTFILE:.c=.o}

all:	${CLIENTNAME} $(SERVERNAME)

${CLIENTNAME}: ${CLIENTOBJS}
	${CC} ${CFLAGS} ${CLIENTOBJS} -o ${CLIENTNAME}

$(SERVERNAME): $(SERVEROBJS)
	${CC} ${CFLAGS} ${SERVEROBJS} -o ${SERVERNAME}

clean	:
		${RM} ${SERVEROBJS} ${CLIENTOBJS}

fclean	: clean
		${RM} ${CLIENTNAME} ${SERVERNAME}

re		: fclean all

.PHONY	: all clean fclean re
