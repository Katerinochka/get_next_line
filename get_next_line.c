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
	static char	bufch[BUFFER_SIZE + 1];
	static int	begin_index = 0;
	static int	code;
	static int	rtrn_read;

	if (!my_strlen(bufch))
	{
		rtrn_read = my_read(fd, bufch);
		if (rtrn_read == -1 || BUFFER_SIZE <= 0 || (!line))
			return (-1);
	}
	*line = malloc(1);
	while (1)
	{
		*line = my_strjoin(*line, &bufch[begin_index]);
		code = check(&bufch[0], &begin_index);
		if (code != 2)
		{
			if (code == 0 || begin_index == 0)
				my_zero(bufch);
			return (code);
		}
		my_zero(bufch);
		rtrn_read = my_read(fd, bufch);
	}
}
