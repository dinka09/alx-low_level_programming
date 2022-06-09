#include "main.h"
/**
 * print_last_digit - Printingthe last digit
 * @n: The integer to tested
 * Return: the last digit
 */
int print_last_digit(int)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
