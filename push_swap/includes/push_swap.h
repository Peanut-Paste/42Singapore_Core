/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 01:07:07 by jingtan           #+#    #+#             */
/*   Updated: 2023/11/28 19:40:12 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct Node {
	int	val;
	struct Node *next;
	struct Node *prev;
} Node;

typedef struct Stack {
	struct Node *top;
	struct Node *bottom;
	int	size;
} Stack;


int Checker(int argc, char **argv);
int ft_atoi(char *s);
void InsertNode(Stack *stack, int v);
Stack *NewStack();
void Solve(int argc, char **argv);
void Swap(Stack *stack);
void Rotate(Stack *stack);
void ReverseRotate(Stack *stack);
int GetIndex(int *arr, int val);
void printStack(Stack *stack);
int checkStack(Stack *stack);
void popStack(Stack *stack);
void pushA(Stack *a, Stack *b);
void pushB(Stack *a, Stack *b);

#endif