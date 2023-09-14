/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:11:07 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/14 19:11:09 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ulputhex_fd(unsigned long n, const char *base, int fd)
{
	int	len;

	len = 0;
	if (n > 15)
	{
		len += ft_ulputhex_fd(n / 16, base, fd);
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
		ft_putstr_fd("0x", fd);
		len += 2;
		len += ft_ulputhex_fd((unsigned long)ptr, "0123456789abcdef", fd);
	}
	return (len);
}
