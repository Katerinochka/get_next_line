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

char	get_char(int fd, size_t count)
{
	char	*ch;

	ch = malloc(sizeof(char) * (count + 1));
	read(fd, &ch, count);
	ch[count] = '\0';
	printf("%c\n", ch[count - 1]);
	return (ch[count - 1]);
}

size_t	get_size_str(int fd)
{
	size_t	size;

	size = 1;
	while (get_char(fd, size) != '\n')
		size++;
	printf("%lu\n", size);
	return (size - 1);
}
