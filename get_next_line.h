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

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

size_t			my_strlen(char *str);

int				check(char *str, int *i);

//int				my_switch(char *bufch, int &begin_index);

char			*my_read(int fd);

int				get_next_line(int fd, char **line);

char			*my_strjoin(char *s1, char *s2);

#endif
