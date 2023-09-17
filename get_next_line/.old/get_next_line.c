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
	int				i;

	ft_memset(buffer, 0, BUFFER_SIZE);
	i = 0;
	while (fd > 0 && i < BUFFER_SIZE)
	{
		read(fd, &buffer[i], 1);
		if (!buffer[i] || buffer[i] == '\n')
			break;
		i++;
	}
	if (buffer[i] == '\n')
		i++;
	res = ft_strdup(buffer, i);
	return (res);
}

char	*get_next_line(int fd)
{
	char	buffer[BUFFER_SIZE];
	int		count;
	int		i;
	char	*res;
	
	if (fd < 0)
		return (NULL);
	if (fd > 0)
		return (get_file(fd));
	ft_memset(buffer, 0, BUFFER_SIZE);
	read(fd, buffer, BUFFER_SIZE);
	while (buffer[count])
		count++;
	res = ft_strdup(buffer, count);
	return (res);
}

int	main(void)
{
	int		fd;
	char	*a;

	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
		return (-1);
	for (int i = 0; i < 10; i++)
	{
		a = get_next_line(fd);
		printf("%s", a);
	}
	close(fd);
	return (0);
}