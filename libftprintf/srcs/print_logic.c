/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_logic.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:05:58 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/13 15:05:58 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	print_var2(char c, void *ptr)
{
	if (c == 'p')
	{
		// The void * pointer argument has to be printed in hexadecimal 
		//format.
	}
	else
		if (c == 'x')
		{
		// Prints an number in hexadecimal (base16) lowercase format.
		}
		if (c == 'X')
		{
		// Prints an number in hexadecimal (base16) uppercase format.
		}
}

static int	print_var(char c, void *ptr)
{
	if (c == 'c')
	{
		ft_putchar_fd((int)ptr, 1);
		return (1);
	}
	if (c == 's')
	{
		ft_putstr_fd((char *)ptr, 1);
		return (ft_strlen((char *)ptr));
	}
	if (c == 'd' || c == 'i')
	{
		ft_putstr_fd(ft_itoa((int)ptr), 1);
		return (ft_strlen(ft_itoa((int)ptr)));
	}
	if (c == 'u') // not completed yet.
	{
		ft_putstr_fd(ft_uitoa((int)ptr), 1);
		return (ft_strlen(ft_uitoa((int)ptr)));
	}
	return (print_var2(c, ptr));
}

int	ft_printf2(const char *fmt, va_list args)
{
	int		res;
	void	*argument;

	res = 0;
	while (*fmt)
	{
		if (*fmt == '%' && check_charset(*(fmt + 1), "cspdiuxX"))
		{
			argument = va_arg(args, void *);
			res += print_var(*(fmt + 1), argument);
			fmt += 2;
		}
		else
		{
			res++;
			if (*fmt == '%' && *(fmt + 1) == '%')
				fmt++;
			ft_putchar_fd(*fmt++, 1);
		}
	}
	return (res);
}