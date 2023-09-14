/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:06:26 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/14 13:15:07 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putunbr_fd(unsigned int n, int fd)
{
	int	len;

	len = 0;
	if (n > 9) 
	{
		len += ft_putunbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
		len++;
	}
	else 
	{
		ft_putchar_fd(n + '0', fd);
		len++;
	}
	return (len);
}

int	ft_puthex_fd(unsigned int n, const char *base, int fd)
{
	int	len;

	len = 0;
	if (n > 15)
	{
		len += ft_puthex_fd(n / 16, base, fd);
		ft_putchar_fd(base[n % 16], fd);
		len++;
	}
	else
	{
		ft_putchar_fd(base[n], fd);
		len++;
	}
	return (len);
}

int	ft_putptr_fd(void *ptr, int fd)
{
	int	len;

	len = 0;
	if (!ptr) 
	{
		ft_putstr_fd("(nil)", fd);
		len += 5; 
	}
	else 
	{
		ft_putstr_fd("00", fd);
		len += 2;
		len += ft_puthex_fd((unsigned long)ptr, "0123456789ABCDEF", fd);
	}
	return (len);
}

int ft_putstrgetlen_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	return (ft_strlen(s));
}

int	check_charset(char c, const char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

void ft_putchari_fd(int i, int fd)
{
	write(fd, &i, 1);
}