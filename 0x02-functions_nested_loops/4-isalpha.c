#include "main.h"

/**
 * _islower - Checks if an input is lowercase
 * @c: the character to print
 *
 * Return: 1 (true) or 0 (false)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
