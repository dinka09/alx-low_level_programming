#include "main.h"
/**
 * Description - printing alphabets using _putchar
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++;)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
