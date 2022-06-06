#include <stdio.h>
/**
 * main - Printing one digit numbers in descending orders with commnets
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'o'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
	}
	putchar('\n');
	return (0);
}
