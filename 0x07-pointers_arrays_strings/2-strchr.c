#include "main.h"

/**
 * _strchr - search for a character
 * @s: input string
 * @c: character being searched for
 * Return: pointer s or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		s++;
	if (s[i] == c)
		return ((char *) s);
	else
		return (NULL);
}
