#include "main.h"

/**
 * print_line - Prints n number of lines
 * @n: integer
 * Return: Void
 */
void print_line(int n)
{
	int m;

	for (m = 1; m <= n; m++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
