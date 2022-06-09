#include "main.h"
/**
 * main - Pringitn alphabets using _putchar
 *
 * Return: ALways 0 (Success)
 */
void print_alphabet(void);
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	{
	_putchar('\n');
	}
}


