/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:05:21 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/10 22:05:21 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int n)
{
	int				c;
	long long int	temp;

	c = 0;
	temp = n;
	if (temp < 0)
	{
		c++;
		temp *= -1;
	}
	while (temp > 0)
	{
		temp /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char			*res;
	int				c;
	int				i;
	long long int	temp;

	c = count(n);
	temp = n;
	res = malloc(sizeof(char) * (c + 1));
	if (!res)
		return (NULL);
	if (temp < 0)
	{
		res[0] = '-';
		temp *= -1;
	}
	i = c - 1;
	while (temp > 0)
	{
		res[i--] = temp % 10 + 48;
		temp /= 10;
	}
	res[c] = '\0';
	return (res);
}
