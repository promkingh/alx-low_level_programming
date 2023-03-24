#include "main.h"

/**
 * print_triangle - Print trianglebased on n
 * @size: input integer
 * Return: Void
 */

void print_triangle(int size)
{
	int m, p;

	if (size > 0)
	{
		for (m = size; m > 0; m--)
		{
			for (p = m; p > 1; p--)
			{
				_putchar(' ');
			}
			for (p = m; p <= size; p++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
