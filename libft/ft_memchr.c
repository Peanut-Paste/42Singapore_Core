/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:05:15 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/12 18:29:19 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*byte_s;
	unsigned char		byte_c;
	unsigned int		i;

	byte_s = s;
	byte_c = c;
	i = 0;
	while (i < n)
	{
		if (byte_s[i] == byte_c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
