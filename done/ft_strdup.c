/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 09:52:12 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/10 09:52:12 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		length;
	int		i;
	char	*res;

	length = ft_strlen(s);
	res = malloc(length * sizeof(char));
	while (i < length)
	{
		res[i] = s[i];
		i++;
	}
	return (res);
}
