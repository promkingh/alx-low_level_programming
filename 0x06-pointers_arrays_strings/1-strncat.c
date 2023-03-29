#include "main.h"

/**
 * _strncat - concatenate two strings from a point n
 * @dest: destination string
 * @src: source string
 * Return: character
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0; dest[j] != '\0'; j++)
		;

	for (i = 0;(i < n) && (src[i] != '\0'); i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
