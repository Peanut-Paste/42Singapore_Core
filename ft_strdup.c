/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:52:12 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/12 15:28:13 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	length;
	size_t	i;
	char	*res;

	length = ft_strlen(s);
	res = malloc((length + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < length)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
