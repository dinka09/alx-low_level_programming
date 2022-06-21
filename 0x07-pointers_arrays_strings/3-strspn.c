#include "main.h"
/**
 * _strspn - functions that get prefix substring
 * @s: source string
 * @accept: accepted string
 * Return: number of bytes in init string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				b++;
			}
			a++;
	}
	return (t);
}
