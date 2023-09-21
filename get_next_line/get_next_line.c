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

static char	*ft_addstring(char *target, char *buffer, size_t size)
{
	size_t	current_size;
	char	*res;
	int		i;
	size_t	j;

	i = 0;
	if (!target)
		res = malloc(size + 1);
	else
	{
		current_size = ft_strlen(target, 0);
		res = malloc(current_size + size + 1);
		while (target[i])
		{
			res[i] = target[i];
			i++;
		}
	}
	j = 0;
	while (j < size)
		res[i++] = buffer[j++];
	res[i] = '\0';
	free(target);
	return (res);
}

static char	*ft_read(int fd)
{
	char	*buffer;
	int		status;
	char	*res;

	res = NULL;
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	status = 1;
	while (status)
	{
		status = read(fd, buffer, BUFFER_SIZE);
		if (status == 0 || status < 0)
			break ;
		buffer[status] = '\0';
		res = ft_addstring(res, buffer, status);
		if (res[status - 1] == '\n')
		{
			free(buffer);
			return (res);
		}
	}
	free(buffer);
	return (res);
}

static char	*ft_getline(char *str)
{
	char	*res;
	size_t	i;
	size_t	size;

	size = ft_getnlnt(str);
	if (size == 0)
		return (NULL);
	res = malloc(size + 1);
	if (!res)
		return (NULL);
	res[size] = '\0';
	i = 0;
	while (i < size)
	{
		res[i] = str[i];
		i++;
	}
	return (res);
}

void	del_storage(char **storage)
{
	int		i;
	size_t	size;

	i = ft_getnlnt(*storage);
	size = ft_strlen(*storage, i);
	if (size == 0)
	{
		free(*storage);
		*storage = NULL;
	}
	else
		del_storage2(storage, i, size);
}

char	*get_next_line(int fd)
{
	static char	*storage;
	char		*temp;
	char		*res;

	if (fd < 0)
		return (NULL);
	temp = ft_read(fd);
	if (temp && temp[0] != '\0')
		storage = temp;
	else
		free(temp);
	if (!storage)
		return (NULL);
	res = ft_getline(storage);
	del_storage(&storage);
	return (res);
}

// int	main(void)
// {
// 	int		fd;
// 	char	*a;

// 	fd = open("empty", O_RDONLY);
// 	if (fd < 0)
// 		return (-1);
// 	for (int i = 0; i < 5; i++)
// 	{
// 		a = get_next_line(fd);
// 		printf("%s", a);
// 		free(a);
// 	}
// 	close(fd);
// 	return (0);
// }