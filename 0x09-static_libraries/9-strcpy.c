#include "main.h"

/**
 * _strcpy - copy string from source to destination
 * @dest: destination to copy to
 * @src: where to copy from
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; src[i] == '\0'; i++)
		dest[i] = '\0';
	return (dest);
}
