#include "main.h"

/**
 * print_diagonal - Print diagonal
 * @n: integer
 * Return: Void
 */
void print_diagonal(int n)
{
	int m, p;

	if (n <= 0)
		_putchar('\n');
	for (m = 1; m <= n; m++)
	{
		for (p = 1; p <= m; p++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
