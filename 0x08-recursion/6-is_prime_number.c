#include "main.h"

/**
 * is_divisible - checks if given number is divisible by numbers m
 * @l: given integer
 * @m: comparison integer
 * Return: 0 (False) or 1 (True)
 */

int is_divisible(int l, int m)
{
	if (l % m == 0 && l == m)
		return (1);
	else if (l / m == m)
		return (0);
	return (is_divisible(l, m + 2));
}

/**
 * is_prime_number - check if a number is a prime number or not
 * @n: given integer
 * Return: 0 (False) or 1 (True)
 */

int is_prime_number(int n)
{
	if (n < 2 || n % 2 == 0)
		return (0);
	else if (n == 2)
		return (1);
	return (is_divisible(n, 3));
}

