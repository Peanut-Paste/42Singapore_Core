/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 22:05:21 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/12 18:06:17 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(long int n)
{
	int	res;

	if (n == 0)
		return (1);
	res = 0;
	while (n != 0)
	{
		n /= 10;
		res++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	int			len;
	long int	temp;
	char		*res;

	temp = n;
	len = count(temp);
	if (n < 0)
	{
		temp *= -1;
		len++;
	}
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[len] = '\0';
	while (len--)
	{
		res[len] = temp % 10 + '0';
		temp /= 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
