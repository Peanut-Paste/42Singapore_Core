/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 22:05:06 by jingtan           #+#    #+#             */
/*   Updated: 2024/03/14 02:13:47 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"
#include <stdio.h>

void static ft_encode_and_send(char c, int pid) {
	int i;

	i = 0;
	while (i++ < 8) {
		if (c & 0x80) {
			kill(pid, SIGUSR2);
		}
		else {
			kill(pid, SIGUSR1);
		}
		c = c << 1;
		usleep(100);
	}
}

int main(int argc, char **argv) {
	int pid;
	int i;

	if (argc != 3)
		return (-1);
	if (check_pid(argv[1]))
		return (-1);
	pid = ft_atoi(argv[1]);
	i = 0;
	while (argv[2][i])
	{
		ft_encode_and_send(argv[2][i], pid);
		i++;
	}
	ft_encode_and_send(argv[2][i], pid);
}