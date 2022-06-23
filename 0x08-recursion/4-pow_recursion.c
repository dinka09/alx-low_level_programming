#include "main.h"
/**
 * _pow_recursion - a function that return the value of x raised to y
 * @x: base value
 * @y: power value
 * Rerunr: success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
