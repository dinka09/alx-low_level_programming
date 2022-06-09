#include "main.h"
/**
 * _isalpha - checkking the alphabetical letters
 * @c: The charachter to be cheched
 * Return: returns 1 or 0 based on the given conditons
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
