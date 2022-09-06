#include "main.h"
/**
 * print_square - pront hashtag square
 * @size: sizie variable
 * Return: o.
 */
{
	void print_square(int size)
	{
		int x, y;

		if (size > 0)
		{
			for (y = 1; y <= size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
