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

char	*ft_crealloc(char *ptr, int size, char new)
{
	char	*res;
	int		i;

	res = malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	i = 0;
	if (size != 1)
	{
		while (*ptr)
			res[i++] = *ptr++;
	}
	res[i++] = new;
	res[i] = '\0';
	return (res);
}

char	*get_next_line(int fd)
{
	char	*buffer;
	char	current;
	int		i;

	if (fd < 0)
		return (NULL);
	read(fd, &current, 1);
	if (!current)
		return (NULL);
	i = 0;
	while (fd >= 0 && current && current != '\n')
	{
		buffer = ft_crealloc(buffer, i++ + 1, current);
		current = 0;
		read(fd, &current, 1);
	}
	if (current == '\n')
		buffer = ft_crealloc(buffer, i + 1, current);
	return (buffer);
}

// int	main(void)
// {
// 	int		fd;
// 	char	*a;

// 	fd = open("test.txt", O_RDONLY);
// 	if (fd < 0)
// 		return (-1);
// 	for (int i = 0; i < 10; i++)
// 	{
// 		a = get_next_line(fd);
// 		printf("%s", a);
// 	}
// 	close(fd);
// 	return (0);
// }