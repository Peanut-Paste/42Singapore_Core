/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:14:54 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/13 12:14:54 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		res;

	va_start(args, fmt);
	res = ft_printf2(fmt, args);
	va_end(args);
	return (res);
}

int main(void)
{
	int a = ft_printf("%s this is %s\nI am %%d %i years old. %c\n", "hello", "Isaac", -26, 'a');
	ft_printf("%d", a);
}