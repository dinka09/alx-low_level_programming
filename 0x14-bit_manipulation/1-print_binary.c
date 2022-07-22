#include "main.h"
#include <unistd.h>
#include <limits.h>
/**
 * print_binary -print an unsigned int in binary
 *
 * @n: ...
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int bin = 1ul << 63;
	char c = '0';

	while (!(bin & n) && bin != 0)
		bin = bin >> 1;

	if (bin == 0)
		write(1, &c, 1);

	while (bin)
	{
		if (bin & n)
			c = '1';
		else
			c = '0';
		write(1, &c, 1);
		bin = bin >> 1;
	}
}
