/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 22:47:35 by jingtan           #+#    #+#             */
/*   Updated: 2024/03/14 02:14:09 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	ft_putchar(char c) {
	write(1, &c, 1);
}

void	ft_putstr(char *str) {
	if (str) {
		while (*str)
			write(1, str++, 1);
	}
}

void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
}

int	ft_atoi(char *str)
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

int	check_pid(char *ppid) {
	int i;

	if (!ppid)
	{
		return (1);
	}
	i = 0;
	while (ppid[i]) {
		if (ppid[i] < '0' || ppid[i] > '9') {
			return (1);
		}
		i++;
	}
	return (0);
}