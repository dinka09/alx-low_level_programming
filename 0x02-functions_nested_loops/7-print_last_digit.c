#include "main.h"
/**
 *print_last_digit - Printing last digit of the gven number
 * @n: the last digit number
 * Return: the last digitof the given integer
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);			
}
