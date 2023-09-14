/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:40:15 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/12 18:42:33 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*byte_src;
	unsigned char		*byte_dest;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	byte_dest = dest;
	byte_src = src;
	if (byte_dest > byte_src)
	{
		while (n--)
			byte_dest[n] = byte_src[n];
	}
	else
	{
		while (i < n)
		{
			byte_dest[i] = byte_src[i];
			i++;
		}
	}
	return (dest);
}
