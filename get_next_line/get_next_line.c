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

char	*get_next_line(int fd)
{

}

#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int	fd;
	char	*a;

	fd = open("test.txt", O_RDONLY);
	a = get_next_line(fd);
	printf("%s", a);
	return (0);
}