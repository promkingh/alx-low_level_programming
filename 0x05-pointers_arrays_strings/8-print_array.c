#include "main.h"
#include <stdio.h>

/**
 * print_array - print the contents of an array
 * @a: array pointer
 * @n: array size
 * Return: void
 */

void print_array(int *a, int n)
{
	int i, j, k, num, dig[10];
	char c;

	for (i = 0; i < n; i++)
	{
		num = *(a + i);
		j = 0;

		if (num < 0)
		{
			num = -num;
			putchar('-');
		}
		else if (num == 0)
			putchar(0 + '0');

		while (num > 0)
		{
			dig[j] = num % 10;
			num = num / 10;
			j++;
		}

		for (k = j - 1; k >= 0; k--)
		{
			c = dig[k] + '0';
			putchar(c);
		}
		if (i != n - 1)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
}
