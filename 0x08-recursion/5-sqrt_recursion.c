#include "main.h"

/**
 * multiple_check - checks if m is a perfect square of l
 * @l: given number
 * @m: multiple
 * Return: m, -1 or function
 */

int multiple_check(int l, int m)
{
	if ((m * m) == l)
		return (m);
	else if ((m * m) >= l)
		return (-1);
	return (multiple_check(l, m + 1));
}

/**
 * _sqrt_recursion - computes the square root of a given integer
 * @n: input integer
 * Return: n. -1 or function
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	else if (n < 0)
		return (-1);
	return (multiple_check(n, 0));
}
