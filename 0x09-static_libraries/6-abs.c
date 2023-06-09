#include "main.h"

/**
 * _abs - Absolute value of an integer
 *
 * @n: integer
 * Return: n 0r -n
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n == 0)
		return (0);
	else
		return (-n);
}
