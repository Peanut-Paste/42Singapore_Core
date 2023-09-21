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

size_t	ft_strlen(char *s, int index)
{
	size_t	i;

	i = 0;
	while (s[index])
	{
		i++;
		index++;
	}
	return (i);
}

size_t	ft_getnlnt(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	return (i);
}

void	del_storage2(char **storage, int i, size_t size)
{
	char	*new;
	char	*temp;
	size_t	j;

	new = malloc(size + 1);
	if (!new)
		return ;
	new[size] = '\0';
	temp = *storage;
	j = 0;
	while (j < size)
		new[j++] = temp[i++];
	free(*storage);
	*storage = new;
}
