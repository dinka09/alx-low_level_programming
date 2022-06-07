#include <stdio.h>
/**
* main - print _putchar
*
* Return: Always 0 (Successs)
*/
int _putchar(char c);
{
	char word[8] = "_putchar";
	int i;

	for(i = 0; i <= 8; i++)
	{
		putchar(word[i]);
	}
	putchar('\n');
	return (0);
}
