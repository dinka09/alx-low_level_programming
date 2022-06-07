#include <stdio.h>
/**
 * main - printing all possible two digits numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 56; i++)
	{
	for (j = 49; j <= 57; j++)
	{
	if (i < j)
	{
	putchar(i);
	putchar(j);
	if ((i < 56) || (j < 57))
	{
	putchar(44);
	putchar(32);
	}
	}
	}
	}
	putchar(10);
	return (0);
}
