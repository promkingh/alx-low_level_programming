#include "main.h"

/**
 * puts_half - print half of the given string
 * @str: input string
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, len, hf_len;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	len = len - 1;
	
	if (len % 2 == 0)
		hf_len = len / 2;
	else
		hf_len = (len - 1)/ 2;

	for (i = 0; i <= hf_len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
