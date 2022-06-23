#include "main.h"
/**
 * factorial - print the factorial of the given number
 * @n: given number
 * Return: -1 or 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
