#include "main.h"
/**
 * reverse_array -reverse the content of an array of integers
 *
 * @a: the array to reverse
 * @n: the number of elements in the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;
	int j = n - 1;

	for (i = 0; i < j; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}
