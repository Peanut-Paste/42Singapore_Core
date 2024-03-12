/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queueOperation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:03:58 by jingtan           #+#    #+#             */
/*   Updated: 2023/11/26 15:10:31 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int checkStack(Stack *stack) {
	Node *current;
	Node *next;

	current = stack->top;
	while (current->next) {
		next = current->next;
		if (current->val < next->val) {
			return 0;
		}
		current = current->next;
	}
	return (1);
}

void printStack(Stack *stack) {
	Node *current;

	current = stack->top;
	while (current) {
		printf("%d\n", current->val);
		current = current->next;
	}
}

void popStack(Stack *stack) {
	Node *current;

	current = stack->top;
	if (current == stack->bottom)
	{
		stack->top = 0;
		stack->bottom = 0;
	}
	else
	{
		stack->top = current->next;
		current->next = 0;
	}
	free(current);
}

void pushA(Stack *a, Stack *b) {
	Node *current;

	current = a->top;
	InsertNode(b, current->val);
	popStack(a);
}

void pushB(Stack *a, Stack *b) {
	Node *current;

	current = b->top;
	InsertNode(a, current->val);
	popStack(b);
}
