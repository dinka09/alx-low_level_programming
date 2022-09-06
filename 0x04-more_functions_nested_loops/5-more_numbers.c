#include "main.h"
/**
 * more_numbers - check for a digit (0 -9)
 *
 * Return: 0.
 */
void more_numbers(void)
{
	int a, i;

	for (a = 0; a < 10; a++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i / 10 != 0)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
