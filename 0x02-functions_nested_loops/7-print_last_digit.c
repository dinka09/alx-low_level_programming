#include "main.h"
/**
 * print_last_digit - Printingthe last digit
 * @n: The integer to tested
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int x;

	x = (n % 10);
	if (n < 0)
	{
		ix = (-1 * n);
	}
	_putchar(x + '0');
	return (x);
}
