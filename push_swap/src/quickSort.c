/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quickSort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jingtan <jingtan@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:21:58 by jingtan           #+#    #+#             */
/*   Updated: 2023/11/26 15:02:55 by jingtan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int partition(int *arr, int left, int right);
static void swap(int *arr, int a, int b);


void QuickSort(int *arr, int left, int right) {
	int pivot;

	if (left < right) {
		pivot = partition(arr, left, right);
		QuickSort(arr, left, pivot - 1);
		QuickSort(arr, pivot + 1, right);
	}
}

static int partition(int *arr, int left, int right) {
	int i;
	int pivot;

	i = left + 1;
	pivot = arr[left];
	while (i <= right) {
		if (arr[i] < pivot) {
			swap(arr, i, left);
			i++;
			left++;
		} else if (arr[i] > pivot) {
			swap(arr, i, right);
			right--;
		} else {
			i++;
		}
	}
	return left;
}

static void swap(int *arr, int a, int b) {
	int temp;

	temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}