#include "main.h"
/**
 * print_numbers - checks for a digit (0 - 9)
 *
 * Return: always 0.
 */
void print_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
