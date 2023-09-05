/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 00:08:16 by jingtan           #+#    #+#             */
/*   Updated: 2023/09/06 02:12:29 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum (int letter) {
    if (letter >= 'A' && letter <= 'Z') {
        return 1;
    }
    if (letter >= 'a' && letter <= 'z') {
        return 2;
    }
    if (letter >= '0' && letter <= '9') {
        return 4;
    }
    return 0;
}
