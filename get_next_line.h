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

typedef struct s_read_inform
{
	int		code;
	int		size;
	char	*str;
}				t_ri;


//int		get_block(int fd, char **str);

size_t			my_strlen(char *str);

int				check_new_line(char *str);

char			*get_block(int fd);

char			*my_realloc(void *ptr, size_t len);

int				get_next_line(int fd, char **line);

char			*my_strjoin(char *s1, char *s2);

#endif
