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

char	get_char(int fd);

size_t	get_size_str(int fd);

int		get_block(int fd, char **str);

void	*my_realloc(void *ptr, size_t len);

int		get_next_line(int fd, char **line);

#endif
