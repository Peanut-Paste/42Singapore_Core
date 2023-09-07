/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:53:01 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/07 18:53:01 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned char	*byte_d;
	const unsigned char	*byte_s;

	byte_d = dest;
	byte_s = src;
	while (n--)
		*byte_d++ = *byte_s++;
	return (dest);
}