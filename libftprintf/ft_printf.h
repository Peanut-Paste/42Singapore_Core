/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:19:22 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/14 13:12:15 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

int	ft_printf(const char *fmt, ...);
int	check_charset(char c, const char *charset);
int	ft_printf2(const char *fmt, va_list args);
int	ft_putptr_fd(void *ptr, int fd);
int	ft_putunbr_fd(unsigned int n, int fd);
int	ft_puthex_fd(unsigned int n, const char *base, int fd);
int	ft_putstrgetlen_fd(char *s, int fd);

#endif
