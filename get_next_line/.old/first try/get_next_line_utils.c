/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 23:58:05 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/14 23:58:06 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*byte_ptr;

	byte_ptr = ptr;
	while (n--)
		*byte_ptr++ = c;
	return (ptr);
}

char	*ft_strdup(char buffer[BUFFER_SIZE], int size)
{
	char	*res;
	int		i;

	res = malloc((size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[size] = '\0';
	i = 0;
	while (size--)
	{
		res[i] = buffer[i];
		i++;
	}
	return (res);
}