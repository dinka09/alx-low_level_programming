#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: character
 * Return: 0 on succes
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
