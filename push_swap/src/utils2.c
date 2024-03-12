/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:53:22 by jingtan           #+#    #+#             */
/*   Updated: 2023/11/28 19:03:15 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int GetIndex(int *arr, int val) {
	int i;

	i = 0;
	while (arr[i]) {
		if (arr[i++] == val)
			return i;
	}
	return i;
}