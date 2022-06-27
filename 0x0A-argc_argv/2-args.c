#include <stdio.h>
/**
 * main -funtion that prints each indexes
 * @argc: argc parameters
 * @argv: argc value
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i];)
	}
	return (0);
}
