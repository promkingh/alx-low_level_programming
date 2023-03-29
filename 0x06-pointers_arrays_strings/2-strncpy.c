#include "main.h"

/**
 * _strncpy - Copyn number of characters from src to dest
 * @dest: destination array
 * @src: source array
 * @n: position to stop copying
 * Return: Char des
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
