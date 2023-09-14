/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_logic.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:05:58 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/14 13:13:06 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	print_var2(char c, va_list args)
{
	size_t	length;

	if (c == 'p')
		length = ft_putptr_fd(va_arg(args, void *), 1);
	else if (c == 'u')
		length = ft_putunbr_fd(va_arg(args, unsigned int), 1);
	else if (c == 'x')
		length = ft_puthex_fd(va_arg(args, unsigned int), "0123456789abcdef", 1);
	else
		length = ft_puthex_fd(va_arg(args, unsigned int), "0123456789ABCDEF", 1);
	return (length);
}

static int	print_var(char c, va_list args)
{
	char	*p;
	size_t	length;

	if (c == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		return (1);
	}
	else if (c == 's')
		length = ft_putstrgetlen_fd(va_arg(args, char *), 1);
	else if (c == 'd' || c == 'i')
	{
		p = ft_itoa(va_arg(args, int));
		length = ft_putstrgetlen_fd(p, 1);
		free(p);
	}
	else
		return (print_var2(c, args));
	return (length);
}

int	ft_printf2(const char *fmt, va_list args)
{
	int	res;

	res = 0;
	while (*fmt)
	{
		if (*fmt == '%' && check_charset(*(fmt + 1), "cspdiuxX"))
		{
			res += print_var(*(fmt + 1), args);
			fmt += 2;
		}
		else
		{
			if (*fmt == '%')
				fmt++;
			ft_putchar_fd(*fmt++, 1);
			res++;
		}
	}
	return (res);
}
