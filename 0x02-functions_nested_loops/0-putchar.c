#include "main.h"
/**
 * Description - writint the word _putchar to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{	char *pt = "_putchar";
	
	while (*pt)
	{
		_putchar(*pt);
		*pt++;
	}
	_putchar('\n');
	return (0);
}
