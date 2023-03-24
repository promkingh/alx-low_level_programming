#include "main.h"

/**
 * more_number - Print numbers 0 to 14
 *
 * Return: Void
 */
void more_numbers(void)
{
	int i, n;

	for (n = 1; n <= 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
