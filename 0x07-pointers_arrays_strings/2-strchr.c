#include "main.h"
/**
 * _strchr - function that locate charachter in string
 * @s: string
 * @c: a character to be located in string
 * Return: the string from which the character located
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
