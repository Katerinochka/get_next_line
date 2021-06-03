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

/*int	get_next_line(int fd, char **line)
{
	char	*bufch;
	int		check;

	*line = malloc(1);
	while (1)
	{
		bufch = get_block(fd, 1);
		if (!bufch)
			return (-1);
		*line = my_strjoin(*line, bufch);
		if (!line)
			return (-1);
		check = check_simbols(bufch);
		if (check == 1)
			break ;
		if (check == 0)
			return (0);
	}
	return (1);
}*/

int	get_next_line(int fd, char **line)
{
	static char	*bufch;
	static int	begin_index = 0;
	static int	code;

	*line = malloc(1);
	while (1)
	{
		if (bufch == NULL)
		{
			bufch = my_read(fd);
			if (!bufch)
				return (-1);
		}
		*line = my_strjoin(*line, &bufch[begin_index]);
		code = check(&bufch[begin_index], &begin_index);
		if (code != 2)
		{
			if (code == 0)
				bufch = NULL;
			return (code);
		}
		bufch = NULL;
		begin_index = 0;
	}
}
