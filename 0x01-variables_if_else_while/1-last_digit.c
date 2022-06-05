#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - comparing the last digit of the given number
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
int lastdigit = n%10;
if (lastdigit > 5)
{
printf("The last digit of %d is %d and is greater than 5\n", n, lastdigit);
}
if (lastdigit == 0)
{
printf("The last digit of %d is %d and is 0\n", n, lastdigit);
}
if (lastdigit < 6 && lastdigit != 0)
{
printf("The last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
}
return (0);
}
