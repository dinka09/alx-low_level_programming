#include "main.h"
/**
 * _puts_recursion - a function that prints a string followed by new line
 * @s: string
 * Return: on succes 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);

}
