#include "main.h"

/**
 * print_number - print given numbers
 * @n: input number
 * Return: nothing
 */

void print_number(int n)
{
	int d = 1, dig;

	if (n / d)
	{
		_putchar('-');
		n = -n;
	}
	else if (n == 0)
		_putchar('\0');

	while (n / d >= 10)
	{
		d *= 10;
	}
	while (d > 0)
	{
		dig = (n / d) % 10;
		_putchar(dig + '0');
		d /= 10;
	}
}
