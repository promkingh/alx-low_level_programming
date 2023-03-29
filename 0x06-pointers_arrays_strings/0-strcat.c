#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * Return: character
 */

char *_strcat(char *dest, char *src)
{
	int i, j, dest_len;

	/**
	 * Get the length of string to the
	 * end of dest
	 */
	for (j = 0; dest[j] != '\0'; j++)
	{
		dest_len++
	}

	/* Append the src string */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = s[i];
	}
	dest[dest_len] = '\0';

	return (dest);
}
