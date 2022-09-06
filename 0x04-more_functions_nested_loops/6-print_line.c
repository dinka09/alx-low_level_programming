#include "main.h"
/**
 * print_line - checks for a digit(0 -9)
 * @n: variable
 * Return: 0.
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
