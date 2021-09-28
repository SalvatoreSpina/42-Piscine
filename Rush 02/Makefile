# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sspina <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/25 16:42:42 by sspina            #+#    #+#              #
#    Updated: 2021/09/25 16:42:42 by sspina           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.c \
	  file.c \
	  dico.c \
	  file_line.c \
	  file_line_extra.c \
	  ft_extra.c \
	  ft_putstr.c \
	  ft_strcmp.c \
	  ft_strdup_line.c \
	  ft_strlen.c \
	  translate.c

# !!!!!!!!! /* NEED TO ADD ALL THE FILE AT SRC */ !!!!!!!!!

SRCS		= ${addprefix ${PRE}, ${SRC}}

OBJS		= ${SRCS:.c=.o}

PRE			= ./srcs/

HEAD		= ./includes/

DICT		= ./dicts/

NAME		= rush-02

RM			= rm -f

GCC			= gcc

CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}

.c.o:
			@${GCC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			@${GCC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			@rm -f ${OBJS}

fclean:		clean
			@rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
