#include "main.h"
/**
 * print_last_digit - Printingthe last digit
 * @n: The integer to tested
 * Return: the last digit
 */
int print_last_digit(int pld)
{
	int ld;

	ld= (pld % 10);
	if (pld < 0)
	{
		pld = (-1 * pld);
	}
	_putchar(ld + '0');
	return (ld);
}
