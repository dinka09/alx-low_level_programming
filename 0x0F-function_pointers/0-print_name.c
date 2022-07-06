#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * print_name - function that prints a name
 * @name: The name to print
 * @f: pointer to function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
