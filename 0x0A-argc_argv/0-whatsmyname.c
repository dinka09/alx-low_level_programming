#include <stdio.h>
/**
 *  main - FUnction to print its name
 *  @argc: argc parameter
 *  @argv: array of listed command
 *  Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
