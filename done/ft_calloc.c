/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:52:16 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/10 09:52:16 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*new_array;

	if (nelem == 0 || elsize == 0)
		return (NULL);
	new_array = malloc(nelem * elsize);
	if (!new_array)
		return (NULL);
	ft_memset(new_array, 0, nelem * elsize);
	return (new_array);
}
