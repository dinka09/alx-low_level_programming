#include <stdio.h>
/**
 * main - prints the name of hte file it was compiled from
 *
 * Return: Everything worked
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
