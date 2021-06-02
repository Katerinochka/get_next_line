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
	char	*bufch;
	int		check;

	buf = 0;
	*line = malloc(1);
	while (1)
	{
		bufch = get_block(fd);
		check = check_simbols(bufch);
		if (check == 1)
		{
			*line = my_strjoin(*line, bufch);
			break;
		}
		else if (check == 2)
			*line = my_strjoin(*line, bufch);
		else
		{
			*line = my_strjoin(*line, bufch);
			return (0);
		}
	}
	return (1);
}
