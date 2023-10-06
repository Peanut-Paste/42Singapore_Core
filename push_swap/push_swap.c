/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 08:11:07 by jingtan           #+#    #+#             */
/*   Updated: 2023/10/06 12:19:48 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (!checker(argc, argv))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	ps_logic(argc, argv);
	return (0);
}