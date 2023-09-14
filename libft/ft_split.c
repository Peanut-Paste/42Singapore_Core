/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:41:57 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/14 17:33:48 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_token_start(char const *s, int i, char sep)
{
	if (s[i] != '\0' && s[i] != sep)
		if (i == 0 || s[i - 1] == sep)
			return (1);
	return (0);
}

static int	is_token_end(char const *s, int i, char sep)
{
	if (s[i] == sep || s[i] == '\0')
		if (i > 0 && s[i - 1] != sep)
			return (1);
	return (0);
}

static char	**set_token(char **s_split, int i_token, char *token)
{
	int	i;

	if (token)
		s_split[i_token] = token;
	else
	{
		i = -1;
		while (++i < i_token)
			free(s_split[i]);
		free(s_split);
		s_split = NULL;
	}
	return (s_split);
}

char	**ft_split(char const *s, char c)
{
	int		i0;
	int		i1;
	int		i_token;
	int		n_tokens;
	char	**s_split;

	i1 = -1;
	n_tokens = 0;
	while (s[++i1])
		if (is_token_start(s, i1, c))
			n_tokens++;
	s_split = (char **)ft_calloc((n_tokens + 1), sizeof(char *));
	i1 = -1;
	i_token = -1;
	while (s_split && ++i1 >= 0)
	{
		if (is_token_start(s, i1, c))
			i0 = i1;
		else if (is_token_end(s, i1, c) && i0 <= i1)
			s_split = set_token(s_split, ++i_token, ft_substr(s, i0, i1 - i0));
		if (s[i1] == '\0')
			break ;
	}
	return (s_split);
}
