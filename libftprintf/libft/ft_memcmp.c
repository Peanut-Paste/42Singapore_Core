/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:16:43 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/12 14:46:25 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*byte_s1;
	const unsigned char	*byte_s2;

	byte_s1 = s1;
	byte_s2 = s2;
	while (n--)
	{
		if (*byte_s1 != *byte_s2)
			return (*byte_s1 - *byte_s2);
		byte_s1++;
		byte_s2++;
	}
	return (0);
}
