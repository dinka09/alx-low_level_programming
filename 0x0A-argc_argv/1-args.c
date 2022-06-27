#include <stdio.h>
/**
 * main - Function to print the number of argument passed
 * @argc: arg c parameter
 * @argv: value of argc
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
