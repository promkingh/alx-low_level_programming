#include "main.h"

/**
 * _islower - Checks if an input is lowercase
 * @c: the character to print
 *
 * Return: 1 (true) or 0 (false)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
