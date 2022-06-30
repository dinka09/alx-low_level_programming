#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that  creates an array of chars,initializes it
 * @size: size of the given array
 * @c: specific character in array
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
