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

SRC			= get_next_line_utils.c get_next_line.c main.c

OBJS		= $(SRCS:.c=.o)

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra

RM			= rm -fr

.c.o:
				$(CC) $(CFLAGS) -c -I. $< -o $(<:.c=.o)

$(NAME):	$(OBJS) Makefile

all:		$(NAME)

clean:
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

PHONY:		all clean fclean re bonus
