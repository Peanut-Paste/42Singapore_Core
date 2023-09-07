/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:42:54 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/07 17:42:54 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *ptr, int c, unsigned int n)
{
	unsigned char	*byte_ptr;

	byte_ptr = ptr;
	while (n--)
		*byte_ptr++ = c;
	return (ptr);
}