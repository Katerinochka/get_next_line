# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aroselyn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/14 15:58:25 by aroselyn          #+#    #+#              #
#    Updated: 2021/05/14 15:58:29 by aroselyn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= get_next_line

SRC			= main.c get_next_line.c get_next_line_utils.c

OBJS		= $(SRCS:.c=.o)

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra

RM			= rm -fr

.c.o:
				$(CC) $(CFLAGS) -c -I. $< -o $(<:.c=.o)

$(NAME):	$(OBJS)

all:		$(NAME)

clean:
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

PHONY:		all clean fclean re bonus
