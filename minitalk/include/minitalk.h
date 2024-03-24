/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 22:05:18 by jingtan           #+#    #+#             */
/*   Updated: 2024/03/18 10:59:00 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char *str);
int		check_pid(char *ppid);
int		ft_atoi(char *str);
void	ft_realloc_add_char(char **str, char c);

#endif