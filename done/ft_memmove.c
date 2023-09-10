/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:40:15 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/07 21:40:15 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*temp;
	unsigned int		i;
	const unsigned char	*byte_src;
	unsigned char		*byte_dest;

	i = 0;
	byte_dest = dest;
	byte_src = src;
	while (i < n)
	{
		temp[i] = byte_src[i];
		byte_dest[i] = temp[i];
		i++;
	}
	return (dest);
}
