#include "main.h"

/**
 * create_array - creates an array and initializes it with a character
 *
 * @size: Size of buffer
 * @c: charcter to be initialized
 *
 * Return: Null or arr
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(c));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
