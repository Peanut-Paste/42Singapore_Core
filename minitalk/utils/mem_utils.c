/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:48:28 by jingtan           #+#    #+#             */
/*   Updated: 2024/03/18 11:02:35 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

static void	add_to_null_string(char **str, char c)
{
	char	*new;

	new = malloc(2);
	if (!new)
		return ;
	new[0] = c;
	new[1] = '\0';
	*str = new;
}

static void	free_and_replace(char **str, char *new)
{
	free(*str);
	*str = new;
}

void	ft_realloc_add_char(char **str, char c)
{
	int		i;
	char	*new;
	char	*temp;

	if (*str == NULL)
	{
		add_to_null_string(str, c);
		return ;
	}
	i = 0;
	temp = *str;
	while (temp[i])
		i++;
	new = malloc(i + 2);
	if (!new)
		return ;
	new[i + 1] = '\0';
	i = 0;
	while (temp[i])
	{
		new[i] = temp[i];
		i++;
	}
	new[i] = c;
	free_and_replace(str, new);
}
