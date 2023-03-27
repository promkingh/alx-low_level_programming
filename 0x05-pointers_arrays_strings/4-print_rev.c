#include "main.h"

/**
 * print_rev -0 Print contents of string array in reverse
 * @s: input string array
 * Return: void
 */

void print_rev(char *s)
{
	int i, len;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	for (i = len; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
