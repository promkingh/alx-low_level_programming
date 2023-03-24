#include "main.h"

/**
 * print_square - Print squares
 * @size: input
 * Return: Void
 */
void print_square(int size)
{
	int m, p;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (m = 0; m < size; m++)
		{
			for (p = 0; p < size; p++)
				_putchar('#');
			_putchar('\n');
		}
	}

}
