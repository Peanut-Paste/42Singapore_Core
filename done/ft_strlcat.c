/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:10:39 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/06 17:12:45 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	dst_size;
	int	src_size;
	int	i;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	i = 0;
	if (size == 0 || dst_size >= size)
	{
		if (size < 0)
			return (dst_size + src_size);
		return (size + src_size);
	}
	while (i < size - dst_size - 1 && src[i])
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	return (dst_size + src_size);
}
