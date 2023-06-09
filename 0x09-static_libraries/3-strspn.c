#include "main.h"

/**
 * _strspn - calculates the length in byte of the initial segment of s
 * @s: input astring
 * @accept: The comparison string
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;

	while (*s != '\0')
	{
		const char *m = accept;

		while (*m != '\0')
		{
			if (*s == *m)
			{
				c++;
				break;
			}
			m++;
		}
		if (*m == '\0')
			break;
		s++;
	}
	return (c);
}
