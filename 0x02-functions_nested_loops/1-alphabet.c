#include <unistd.h>
#include "main.h"
/**
 * main - Pringitn alphabets using _putchar
 *
 * Return: ALways 0 (Success)
 */
int _putchar(int _char)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}

