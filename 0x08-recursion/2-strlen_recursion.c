#include "main.h"
/**
 * _strlen_recursion - a function that returns the lenght of the string
 * @s: string
 * Return: n or lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
