#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H


#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*Mandatory tasks*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/*Advanced tasks*/
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

/**
 *
 * struct listint_s - singly linked list
 * 
 * @n: integer
 * @index:index of the node in the list
 * @next: point to the next index
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
}listint_t;

listint_t *jump_list(listint_t *list, size_t size, int value);
/**
 * struct skiplist_s - singly linked list with an expres lane
 *
 * @n:Integer
 * @index: Index of the node in the list
 * @next: pointer to the next node
 * @express: Pointr to the next node in the express lane*/

typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
}skiplist_t;

skiplist_t *linear_skip(skiplist_t *list, int value);

#endif 

