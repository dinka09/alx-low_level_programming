#include "main.h"
/**
 * puts - functions that print ever other charachters of the string starting* with the first charachter
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int i = 0;
	 for (; str[i] != '\0'; i++)
	 {
		 if ((i % 2) == 0)
			 _putchar(str[i]);
		 else
			 continue;
	 }
	 _putchar('\n');
}
