/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroselyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:56:51 by aroselyn          #+#    #+#             */
/*   Updated: 2021/05/12 15:00:36 by aroselyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

size_t			my_strlen(char *str);

int				check(char *str, int *i);

void			my_zero(char *str);

int				my_read(int fd, char *str);

int				get_next_line(int fd, char **line);

char			*my_strjoin(char *s1, char *s2);

#endif
