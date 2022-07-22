#include "main.h"
/**
 * get_bit - entry point
 * @n: ..
 * @index: index
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int p;

	if (index > 63)
		return (-1);

	p = 1 << index;
	return ((n & p) > 0);
}
