/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:41:57 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/10 20:41:57 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static int	get_size(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return i;
}

static char	*get_word(const char *s, char c)
{
	char	*res;
	int		i;

	res = malloc(sizeof(char) * (get_size(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char **ft_split(char const *s, char c)
{
	char	**res;
	int		i;

	i = 0;
	res = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			res[i++] = get_word(s, c);
		while (*s != c && *s)
			s++;
	}
	res[i] = 0;
	return (res);
}
