#include <stdio.h>

void __attribute__((constructor)) get(void);
/**
 * get - prints a string before main function is executed
 */
void get(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
