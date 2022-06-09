#include "main.h"
/**
 * main - Print_alphabet >printing lower case alphabets
 *
 * Return: ALways 0 (Success)
 */
void print_alphabet(void)
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


