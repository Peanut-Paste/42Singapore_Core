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
const char	*ft_strchr(const char *s, int c);
const char	*ft_strrchr(const char *s, int c);
int	ft_tolower(int c);
int ft_toupper(int c);
void	*ft_memset(void *ptr, int c, unsigned int n);
void	ft_bzero(void *s, unsigned int n);
void	*ft_memcpy(void *dest, const void *src, unsigned int n);
void	*ft_memchr(const void *s, int c, unsigned int n);
int	ft_memcmp(const void *s1, const void *s2, unsigned int n);
void	*memmove(void *dest, const void *src, unsigned int n);

#endif