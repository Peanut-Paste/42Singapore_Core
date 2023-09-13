/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:06:26 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/13 15:06:26 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	gethexa_len(long int n)
{
	int	res;

	if (n == 0)
		return (1);
	res = 0;
	while (n != 0)
	{
		n /= 16;
		res++;
	}
	return (res);
}

char	*ft_itoahexa(int n, const char *base)
{
	int			s_len;
	long int	temp;
	char		*res;
	
	temp = n;
	s_len = gethexa_len(n);
	if (temp < 0)
	{
		temp *= -1;
		s_len++;
	}
	res = malloc((s_len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[s_len] = '\0';
	while (s_len--)
	{
		res[s_len] = base[temp % 16];
		temp /= 16;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}

int	check_charset(char c, const char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}	
	return (0);
}