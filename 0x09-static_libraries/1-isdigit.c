#include "main.h"

/**
 * _isdigit - Checks if an input is is digit
 * @c: the character to print
 *
 * Return: 1 (true) or 0 (false)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
