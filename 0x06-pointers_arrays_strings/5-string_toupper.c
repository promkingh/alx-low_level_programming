#include "main.h"

/**
 * string_toupper - change lowercase string to uppercase
 * @s: input string
 * Return: Always 0.
 */

char *string_toupper(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] >= 'a' && s[j] <= 'z')
			s[j] -= 32;
	}

	return (s);
}
