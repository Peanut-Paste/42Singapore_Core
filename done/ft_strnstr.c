/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:22:33 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/06 17:59:40 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strnstr(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;
	int				j;

	i = 0;
	if (ft_strlen(s2) == 0)
		return (s1);
	while (s1[i] && i + ft_strlen(s2) - 1 < n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s1[i + j] && s2[j])
			j++;
		if (s2[j] == '\0')
			return (&s1[i]);
		i++;
	}
	return (0);
}
