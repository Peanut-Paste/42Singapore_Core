/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:47:28 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/12 16:05:47 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;
	unsigned int	slen;

	slen = ft_strlen(s);
	if (len > slen - start)
		res = malloc((slen - start + 1) * sizeof(char));
	else
		res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	if (start < slen)
	{
		while (i < len && s[start + i])
		{
			res[i] = s[start + i];
			i++;
		}
	}
	res[i] = '\0';
	return (res);
}
