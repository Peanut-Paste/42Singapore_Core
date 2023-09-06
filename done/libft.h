/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 00:40:23 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/06 17:51:43 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int	ft_atoi(const char *str);
int	ft_isalnum(int letter);
int	ft_isalpha(int letter);
int	ft_isascii(int letter);
int	ft_isdigit(int letter);
int	ft_isprint(int letter);
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int dstsize);
int	ft_strlen(const char *s);
int	ft_strlcat(char *dst, const char *src, int dstsize);
int     ft_strncmp(const char *s1, const char *s2, unsigned int n);
const char    *ft_strnstr(const char *s1, const char *s2, unsigned int n);
#endif
