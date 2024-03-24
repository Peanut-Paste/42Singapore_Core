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

char *ft_realloc_add_char(char *str, char c) {
	int i;
	char *new;

	i = 0;
	while (str[i])
		i++;
	new = malloc(i + 1);
	new[i] = '\0';
	i = 0;
	while (str[i]) {
		new[i] = str[i];
		i++;
	}
	new[i] = c;
	free(str);
	return new;
}