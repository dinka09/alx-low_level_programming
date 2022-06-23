#include "main.h"
/**
 * sqrt2 - Evaluating from 1 to n
 * @a: same number a n
 * @b: number that iterates from 1 to n
 * Return: on success 1.
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: number integer
 * Return: on success 1
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
