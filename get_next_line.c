/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroselyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:55:27 by aroselyn          #+#    #+#             */
/*   Updated: 2021/05/12 14:58:34 by aroselyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	int		buf;
	int		bufbuf;

	buf = 0;
	bufbuf = 0;
	line = malloc(BUFFER_SIZE + 1);
	while (1)
	{
		bufbuf = get_block(fd, line);
		buf += bufbuf;
		line = my_realloc(line, buf);
		if (bufbuf == 0)
			break;
	}
	return (1);
}
