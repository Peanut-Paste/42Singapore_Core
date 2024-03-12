/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:41:15 by jingtan           #+#    #+#             */
/*   Updated: 2023/11/28 19:53:29 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void Solve(int argc, char **argv) {
	int i;
	Stack *a;
	Stack *b;


	i = argc - 1;
	a = NewStack();
	b = NewStack();
	while (i > 0)
	{
		InsertNode(a, ft_atoi(argv[i--]));
	}
	QuickSort(a, b);
	printStack(a);
}

void QuickSort(Stack *a, Stack *b) {
	Node *pn;
	int initialSize;

	pn = a->top;
	while (!checkStack(a)) {
		pn = Partition(a, b, pn);
	}
}

Node *Partition(Stack *a, Stack *b, Node *pn) {
	int pivot;
	Node *current;

	pivot = pn->val;
	current = a->top;
	if (current == pn) {
		current = current->next;
	}
	while (current->val < pivot) {

	}
	current = a->bottom;
	while (current->val < pivot) {

	}
	while (b) {

	}
	if (pn->next != 0) {
		return pn->next;
	}
	return pn->prev;
}