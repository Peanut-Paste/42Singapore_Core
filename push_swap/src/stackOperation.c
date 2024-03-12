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

Stack *NewStack() {
	Stack *new;

	new = malloc(sizeof(Stack));
	new->bottom = 0;
	new->top = 0;
	new->size = 0;
	return new;
}

void InsertNode(Stack *stack, int v) {
	Node *newNode;
	Node *current;

	newNode = malloc(sizeof(Node));
	newNode->val = v;
	newNode->prev = 0;
	if (!stack->bottom)
	{
		newNode->prev = 0;
		stack->bottom = newNode;
	}
	else {
		newNode->next = stack->top;
		stack->top->prev = newNode;
	}
	stack->top = newNode;
	stack->size++;
}

void Swap(Stack *stack) {
	Node *temp;

	temp = stack->top;
	stack->top = temp->next;
	stack->top->prev = 0;
	temp->prev = stack->top;
	temp->next = temp->next->next;
	stack->top->next = temp;
}

void Rotate(Stack *stack) {
	Node *temp;

	temp = stack->top;
	stack->top = temp->next;
	stack->top->prev = 0;
	stack->bottom->next = temp;
	temp->prev = stack->bottom;
	temp->next = 0;
	stack->bottom = temp;
}

void ReverseRotate(Stack *stack) {
	Node *temp;

	temp = stack->bottom->prev;
	temp->next = 0;
	stack->bottom->next = stack->top;
	stack->top->prev = stack->bottom;
	stack->top = stack->bottom;
	stack->bottom = temp;
}