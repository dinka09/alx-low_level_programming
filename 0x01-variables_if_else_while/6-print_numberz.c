#include <stdio.h>
/**
 * main - printing one digit base 10 numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	x = '0';

	while (x <= 9)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
