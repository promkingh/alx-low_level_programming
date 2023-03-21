#include "main.h"

/**
 * print_alphabet_x10 -  prints the ts alphabets 10 times
 *
 * Return: Void
 */

void print_alphabet_x10(void)
{
	char alp;
	int n;

	n = 1;
	do {
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
		n++;
	} while (n <= 10);
}
