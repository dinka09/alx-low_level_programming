#include "main.h"
/**
 * print_last_digit - Printing the last digits of the given number
 * @n: integer input
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10i;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
