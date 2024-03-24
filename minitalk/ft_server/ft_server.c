/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 22:05:08 by jingtan           #+#    #+#             */
/*   Updated: 2024/03/18 11:02:11 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"
#include <stdio.h>

static void	ft_reset_int(int *num)
{
	*num = 0;
}

static void	ft_receive(int signal)
{
	static int	bit_count = 0;
	static int	character = 0;
	static char	*final_string = NULL;

	character <<= 1;
	if (signal == SIGUSR2)
	{
		character |= 1;
		if (character == 0)
			character++;
	}
	bit_count++;
	if (bit_count == 8)
	{
		if (character == 0)
		{
			ft_realloc_add_char(&final_string, '\n');
			ft_putstr(final_string);
			free(final_string);
			final_string = NULL;
		}
		ft_realloc_add_char(&final_string, character);
		ft_reset_int(&bit_count);
		ft_reset_int(&character);
	}
}

static int	init(void)
{
	int	id;

	id = getpid();
	if (id == -1)
	{
		ft_putstr("Error: cannot get pid");
		return (1);
	}
	ft_putstr("Server is running on pid: ");
	ft_putnbr(id);
	ft_putchar('\n');
	return (0);
}

int	main(void)
{
	int	err;

	err = init();
	if (err)
	{
		return (-1);
	}
	signal(SIGUSR1, ft_receive);
	signal(SIGUSR2, ft_receive);
	while (1)
		usleep(500);
}
