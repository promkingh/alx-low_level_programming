#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: input string
 * Return: nothingh
 */

void rev_string(char *s)
{
	int i, len;
	char a;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	len = len - 1;

	for (i = 0; i >= 0 && i < len; len--, i++)
	{
		a = s[i];
		s[i] = s[len];
		s[len] = a;
	}
}
