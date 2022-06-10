#include "main.h"
/**
 * print_last_digit - Printing the last digits of the given number
 * @n: integer input
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (n < 0)
	{
		n = (-1 * n);
	}
	_putchar(x + '0');
	return (x);
}
