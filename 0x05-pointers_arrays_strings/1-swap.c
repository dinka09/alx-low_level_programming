#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: input one
 * @b: input two
 * Return: a and b ingers value
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
