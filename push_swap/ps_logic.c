/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_logic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:21:02 by jingtan           #+#    #+#             */
/*   Updated: 2023/10/06 13:57:56 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static t_list	*init_node(int argc, char **argv)
{
	t_list	*new_nodes;
	t_list	*temp_node;
	int		i;
	int		value;

	new_nodes = ft_lstnew(make_int(ft_atoi(argv[1])));
	i = 2;
	while (i < argc)
	{
		temp_node = ft_lstnew(make_int(ft_atoi(argv[i++])));
		ft_lstadd_back(&new_nodes, temp_node);
	}
	return (new_nodes);
}

void	*ps_logic(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	
	a = init_node(argc, argv);
	
	return (0);
}