#include "main.h"
/**
 * print_last_digit - Printing the last digits of the given number
 * @n: integer input
 * Return: The last digit
 */
int print_last_digit(int nld)
{
	int pld;

	pld = nld % 10;
	if (nld < 0)
	{
		nld = (-1 * nld);
	}
	_putchar(pld + '0');
	return (pld);
}
