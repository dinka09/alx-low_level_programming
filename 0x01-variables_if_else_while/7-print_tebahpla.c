#include <stdio.h>
/**
 * main - printing alphabets in inverse order
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	char alphabet = 'z';
	
	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
