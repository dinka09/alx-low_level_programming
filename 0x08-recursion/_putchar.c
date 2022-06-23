#include <unistd.>
/**
 * _putchar - writes the character c to stout
 * @c: The character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errono is set approprately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
