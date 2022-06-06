#include <stdio.h>
/**
 * main - Printing all first digit base 10 numbers start from 0
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}
