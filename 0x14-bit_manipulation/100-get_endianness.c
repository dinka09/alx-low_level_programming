#include "main.h"
/**
 * get_endianness - return the endiannes of the machine
 *
 * Return: a for big endian, 1 for little endian
 */
int get_endianness(void)
{
	int n = 1;

	return (*((char *) &n) + '0');
}
