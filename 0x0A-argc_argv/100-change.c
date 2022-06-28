#include <stdio.h>
#include <stdlib.h>
/**
 * main - The function to print its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int num, j, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (n >= coins[j])
		{
			num -= coins[j];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
