#include "main.h"

/**
 * _memcpy - copies the content of src to dest
 * @dest: destination buffer
 * @src: source buffer
 * @n: number of bytes to copy
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
