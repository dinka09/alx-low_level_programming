#include "main.h"
/**
 * _memset - fill memory with a constant
 *
 * @s: pointer to memory
 * @n: the number of bytes to fill
 * @b: constant byte
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
