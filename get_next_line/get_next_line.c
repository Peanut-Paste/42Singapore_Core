/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 23:57:49 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/14 23:57:50 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

char	*get_file(int fd)
{
	char			buffer[BUFFER_SIZE];
	char			*res;
	static int		end = 0;
	int				start;
	int				i;

	start = end;
	read(fd, buffer, BUFFER_SIZE);
	while (buffer[end] && buffer[end] != '\n')
		end++;
	if (buffer[end] == '\n')
		end++;
	res = malloc((end - start + 1) * sizeof(char));
	res[end] = '\0';
	i = 0;
	while (start < end)
		res[i++] = buffer[start++];
	return (res);
}

char	*get_next_line(int fd)
{
	return (get_file(fd));
}

int	main(void)
{
	int		fd;
	char	*a;

	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
		return (-1);
	for (int i = 0; i < 2; i++)
	{
		a = get_next_line(fd);
		printf("%s", a);
	}
	close(fd);
	return (0);
}