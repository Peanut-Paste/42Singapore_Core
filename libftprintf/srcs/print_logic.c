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
	char	*p;
	size_t	length;

	if (c == 'p')
	{
		//The void * pointer argument has to be printed in
		//hexadecimal format.
	}
	else
	{
		p = ft_itoahexa((int)ptr, "0123456789ABCDEF");
		length = ft_strlen(p);
		if (c == 'x')
		{
			while (*p)
				ft_putchar_fd(ft_tolower(*p++), 1);
		}
		else
			ft_putstr_fd(p, 1);
		free(p);
		return (length);
	}
}

static int	print_var(char c, void *ptr)
{
	char	*p;
	size_t	length;

	if (c == 'c')
	{
		ft_putchar_fd((int)ptr, 1);
		return (1);
	}
	else if (c == 's')
		p = (char *)ptr;
	else if (c == 'd' || c == 'i')
		p = ft_itoa((int)ptr);
	else
		return (print_var2(c, ptr));
	ft_putstr_fd(p, 1);
	length = ft_strlen(p);
	free(p);
	return (length);
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