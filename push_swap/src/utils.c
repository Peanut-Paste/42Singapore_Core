/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:09:03 by jingtan           #+#    #+#             */
/*   Updated: 2023/11/28 16:41:28 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int ft_isDigitS(char *s);
static int ft_strlen(char *s);

int Checker(int argc, char **argv) {
	int i;

	i = 1;
	while (i < argc) {
		if (!ft_isDigitS(argv[i++]))
			return (0);
	}
	return (1);
}

int ft_atoi(char *s) {
	int i;
	int total;

	total = 0;
	i = 0;
	while (s[i])
		total = total * 10 + s[i++] - 48;
	return (total);
}

static int ft_isDigitS(char *s) {
	int i;
	int length;

	i = 0;
	length = ft_strlen(s);
	if (length < 1)
		return 0;
	while (i < length) {
		if (s[i]< 48 || s[i] > 57)
			return (0);
		i++;
	}
	return (1);
}

static int ft_strlen(char *s) {
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}