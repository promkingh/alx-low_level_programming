#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * @i,@j,@k,@l: variables
 *
 * Return: Void
 */
void times_table(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			if (k <= 9)
			{
				_putchar(k + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				l = k;
				while (l >= 10)
					l /= 10;
				_putchar(l + '0');
				_putchar((k % 10) + '0');
				if (j == 9)
					continue;
				_putchar(',');
			}
			if (j == 9)
				continue;
			_putchar(' ');
		}
		_putchar('\n');
	}
}
