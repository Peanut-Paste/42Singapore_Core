/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:19:22 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/13 12:19:22 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include "libft.h"

int		check_charset(char c, const char *charset);
int		ft_printf2(const char *fmt, va_list args);
char	*ft_uitoa(int n);
char	*ft_itoahexa(int n, const char *base);

#endif