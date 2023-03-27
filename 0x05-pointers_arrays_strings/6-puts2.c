#include "main.h"

/**
 * puts2 - Print in terms of 2 selectively
 * @str: input string
 * Return: nothing
 */

void puts2(char *str)
{
	int i, len;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
