/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:41:45 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/14 17:41:46 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

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
	unsigned int	unbr = 4294967295;
	int a = ft_printf("ft_printf: %s %chis is %s\nI am %d years old(%i chinese year).\nMy age in hexa is %x(%X) %%\n", "Hello", 't' ,"Isaac", 26, 25, 26, 26);
	int c = printf("stdprintf: %s %chis is %s\nI am %d years old(%i chinese year).\nMy age in hexa is %x(%X) %%\n", "Hello", 't' ,"Isaac", 26, 25, 26, 26);
	int	b = ft_printf("ft_printf: This is a unsigned integer: %u\nThis is the pointer address of variable a: %p\n", unbr, &a);
	int d = printf("stdprintf: This is a unsigned integer: %u\nThis is the pointer address of variable a: %p\n", unbr, &a);

	ft_printf("First ft_printf length: %d\n", a);
	ft_printf("First printf length: %d\n", c);
	ft_printf("Second ft_printf length: %d\n", b);
	ft_printf("Second printf length: %d\n", d);
}