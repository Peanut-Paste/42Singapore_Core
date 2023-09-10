/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:57:12 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/10 18:57:12 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count_set(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	res = 0;
	while (s1[i] && i <= ft_strlen(s1) - ft_strlen(set))
	{
		j = 0;
		while (set[j] && s1[i + j] == set[j] && set[j])
			j++;
		if (!set[j])
		{
			i = i + j;
			res++;
		}
		i++;
	}
	return (res);
}

static int	is_set(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == set[i] && set[i])
		i++;
	if (set[i] == '\0')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		set_len;
	int		i;

	set_len = ft_strlen(set);
	res = malloc(sizeof(char)
			* (ft_strlen(s1) - set_len * count_set(s1, set) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (*s1)
	{
		if (*s1 == set[0])
		{
			if (is_set(s1, set))
				s1 += set_len;
		}
		res[i++] = *s1++;
	}
	res[i] = '\0';
	return (res);
}
