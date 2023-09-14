/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:10:39 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/12 13:01:44 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (size == 0 || dst_size >= size)
		return (size + src_size);
	i = 0;
	while (i < size - dst_size - 1 && src[i])
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[i + dst_size] = '\0';
	return (dst_size + src_size);
}
