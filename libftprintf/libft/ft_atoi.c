/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 23:27:23 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/12 13:22:09 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	mod;
	int	total;

	total = 0;
	i = 0;
	mod = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32) 
		i++;
	if (str[i] == 43 || str[i] == 45) 
	{
		if (str[i] == 45) 
			mod = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57) 
	{
		total = total * 10 + str[i] - 48;
		i++;
	}
	return (total * mod);
}
