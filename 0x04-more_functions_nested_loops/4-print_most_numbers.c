#include "main.h"

/**
 * print_most_numbers - print the numbers 0 - 9
 *
 * Return: Void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		else
			_putchar(i + '0');
	}
	putchar('\n');
}
