#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - printing lower case alphabets
 * Return: Always 1 (Success)
 */
int main(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
