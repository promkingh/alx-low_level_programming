#include "main.h"

/**
 * print_number - print given numbers
 * @n: input number
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int nm, nn = n;
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		nn = n * -1;
	}
	nm = nn
	while (nm > 9)
	{
		div *= 10;
		nm /= 10;
	}
	while (div >= 1)
	{
		nm = nn % div;
		nn /= div;
		_putchar(n1 + '0');
		nn = nm;
		div /= 10;
	}
}
