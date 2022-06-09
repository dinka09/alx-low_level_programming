#include "main.h"
/**
 * print_sign - printing sign of the give number
 *
 * Return: returns 1 0 -1 based on the value of the given number
 */
int print_sign(int n)
{
	for (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
