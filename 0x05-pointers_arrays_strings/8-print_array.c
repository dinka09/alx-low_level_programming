#include <stdio.h>
#include "main.h"
/**
 * print_array - a function that prints n elements of an array
 * @a: array_name
 * @n: number of the elements of the array tob printed
 * Return: a nd n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);
		if (i == (n - 1))
			printf("%d", a[n - 1]);
		printf("\n");
}

