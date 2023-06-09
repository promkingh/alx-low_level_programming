#include "main.h"

/**
 * _puts - Prints the contents of string array
 * @str: input string array
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
