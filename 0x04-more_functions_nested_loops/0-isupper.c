#include "main.h"

/**
 * _isupper - Checks if an input is uppercase
 * @c: the character to print
 *
 * Return: 1 (true) or 0 (false)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
