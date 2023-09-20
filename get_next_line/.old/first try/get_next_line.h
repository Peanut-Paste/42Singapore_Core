/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 23:57:56 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/14 23:57:57 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

void	*ft_memset(void *ptr, int c, size_t n);
char	*ft_strdup(char buffer[BUFFER_SIZE], int size);
char	*get_next_line(int fd);

#endif
