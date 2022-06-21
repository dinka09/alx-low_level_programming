#include "main.h"
/**
 * _memset - memory set function
 * @s: string
 * @b: a character
 * @n: an integer
 * Rerurn: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
