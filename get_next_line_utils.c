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

/*int	get_block(int fd, char **str)
{
	size_t	i;
	char	buf;
	int		rtrn_read;
	int		flag;
	char	*bufch;

	i = 0;
	bufch = malloc(BUFFER_SIZE + 1);
	flag = 1;
	while (i < BUFFER_SIZE && flag)
	{
		rtrn_read = read(fd, &buf, 1);
		//printf("%d %d\n", buf, rtrn_read);
		//printf("%c", buf);
		if (rtrn_read == 0 || buf == 10)
			flag = 0;
		bufch[i] = buf; 
		i++;
	}
	bufch[i] = 0;
	//printf("%s", bufch);
	str = malloc(i);
	*str = bufch;
	printf("%s", *str);
	return (i);
}*/

size_t	my_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_new_line(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 10)
			return (1);
		i++;
	}
	return (0);
}

char	*get_block(int fd)
{
	size_t	i;
	char	buf;
	int		rtrn_read;
	int		flag;
	char	*bufch;

	i = 0;
	bufch = malloc(BUFFER_SIZE + 1);
	flag = 1;
	while (i < BUFFER_SIZE && flag)
	{
		rtrn_read = read(fd, &buf, 1);
		if (rtrn_read == 0 || buf == 10)
		{
			flag = 0;
			i--;
		}
		bufch[i] = buf;
		i++;
	}
	if (i == 0)
		return (0);
	bufch[i] = 0;
	return (bufch);
}

char	*my_realloc(void *ptr, size_t len)
{
	char	*real;
	size_t	i;

	real = malloc(len);
	i = 0;
	if (real)
	{
		while (*((char *)ptr + i) != 0 || *((char *)ptr + i) != 10)
		{
			*((char *)real + i) = *((char *)ptr + i);
			i++;
		}
	}
	*((char *)real + i) = 0;
	free(ptr);
	return (real);
}

char	*my_strjoin(char *s1, char *s2)
{
	size_t	j;
	size_t	i;
	char	*rez;

	rez = malloc(sizeof(char) * (my_strlen(s1) + my_strlen(s2) + 1));
	if (!rez)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != 0)
	{
		rez[i] = s1[i];
		i++;
	}
	while (s2[j] != 0 && s2[j] != 10)
	{
		rez[i + j] = s2[j];
		j++;
	}
	rez[i + j] = 0;
	return (rez);
}
