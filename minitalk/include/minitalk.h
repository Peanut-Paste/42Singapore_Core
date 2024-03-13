/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 22:05:18 by jingtan           #+#    #+#             */
/*   Updated: 2024/03/14 01:19:06 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <stdlib.h>
# include <signal.h>

void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char *str);
int 	check_pid(char *ppid);
int ft_atoi(char *str);

#endif
