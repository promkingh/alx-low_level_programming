#include  "main.h"
/**
 * print_alphabet - write the alpabets
 *
 * Return: no return value
 */

void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
