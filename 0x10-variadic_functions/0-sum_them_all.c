#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - check the code
 * @n: number of arguments passed
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
