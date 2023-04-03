#include "main.h"

/**
 * _strpbrk - searches for a string and returns a pointe to it
 * @accept: Comparison string
 * @s: input string
 * Return: char s or Null
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *m = accept;

		while (*m != '\0')
		{
			if (*s == *m)
				return ((char *) s);
			m++;
		}
		s++;
	}
	return (NULL);
}
