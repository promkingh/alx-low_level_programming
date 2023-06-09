#include "main.h"

/**
 * _strlen - count string characters
 * @s: input array
 * Return: len
 */

int _strlen(char *s)
{
	int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
