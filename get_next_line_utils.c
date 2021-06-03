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

size_t	my_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check(char *str, int *i)
{
	while (str[*i] != 3)
	{
		if (str[*i] == 10)
		{
			(*i)++;
			return (1);
		}
		if (str[*i] == 0)
			return (0);
		(*i)++;
	}
	return (2);
}

char	*my_read(int fd)
{
	char	*bufch;
	int		rtrn_read;

	bufch = malloc(BUFFER_SIZE + 1);
	rtrn_read = read(fd, bufch, BUFFER_SIZE);
	if (rtrn_read == -1)
	{
		if (bufch)
			free(bufch);
		return (NULL);
	}
	bufch[BUFFER_SIZE] = 3;
	return (bufch);
}

/*int	my_switch(char **bufch, int &begin_index)
{
	int code;

	code = check(*bufch, *begin_index);
	if (code == 0)
	{
		*bufch = NULL;
	}
	if (code == 2)
	{
		*bufch = NULL;
		*begin_index = 0;
	}
	return (code);
}*/

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
	free(s1);
	while (s2[j] != 0 && s2[j] != 10 && s2[j] != 3)
	{
		rez[i + j] = s2[j];
		j++;
	}
	rez[i + j] = 0;
	return (rez);
}
