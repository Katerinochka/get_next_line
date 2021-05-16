/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroselyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:55:45 by aroselyn          #+#    #+#             */
/*   Updated: 2021/05/12 15:07:21 by aroselyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	get_char(int fd)
{
	char	ch;

	read(fd, &ch, 1);
	return (ch);
}

size_t	get_size_str(int fd)
{
	size_t	size;

	size = 0;
	while (get_char(fd) != '\n')
		size++;
	return (size);
} 

int	get_block(int fd, char **str)
{
	size_t	i;
	char	buf;
	int		rtrn_read;

	i = 0;
	while (i < BUFFER_SIZE)
	{
		rtrn_read = read(fd, &buf, 1);
		if (!rtrn_read || buf == '\n')
			break;
		*str[i] = buf; 
		i++;
	}
	*str[i] = 0;
	return (i);
}

void	*my_realloc(void *ptr, size_t len)
{
	void	*real;
	size_t	i;

	real = malloc(len);
	i = 0;
	if (real)
	{
		while (*((char *)ptr + i) != 0)
		{
			*((char *)real + i) = *((char *)ptr + i);
			i++;
		}
	}
	*((char *)real + i) = 0;
	free(ptr);
	return (real);
}
