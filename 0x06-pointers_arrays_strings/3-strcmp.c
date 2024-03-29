#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: one of the string to compare
 * @s2: the other string to compare
 *
 * Return: differenc in lenght
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
