#include "main.h"

/**
 * print_times_table - Prints the times tabe of n
 * @n: integer
 * Return: Void
 */
void print_times_table(int n)
{
	int pd, mp, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (mp = 1; mp <= n; mp++)
			{
				_putchar(',');
				_putchar(' ');

				pd = num * mp;
				if (pd <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (pd >= 10 && pd < 100)
				{
					_putchar(' ');
					_putchar((pd / 10) + '0');
				}
				else
				{
					_putchar((pd / 100) + '0');
					_putchar(((pd / 10) % 10) + '0');
				}
				_putchar((pd % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
