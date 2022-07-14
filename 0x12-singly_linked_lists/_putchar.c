#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @: the character to print out
 * Return: 0 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
