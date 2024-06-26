/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 08:11:07 by jingtan           #+#    #+#             */
/*   Updated: 2023/11/26 15:47:56 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	main(int argc, char **argv)
{
	if (!Checker(argc, argv)) {
		write(1, "error\n", 6);
		return (1);
	}
	Solve(argc, argv);
	return (0);
}