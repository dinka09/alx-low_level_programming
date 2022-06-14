
#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;

	for (; src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';
	return (dest);
}
