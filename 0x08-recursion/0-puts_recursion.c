#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: Input string
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
