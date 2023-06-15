#include "main.h"

/**
 * _calloc - allocate memory for an array using malloc
 * @nmemb: number of member elements
 * @size: size of
 * Return: pointer to allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	char *mem;
	unsigned int t_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	t_size = nmemb * size;

	arr = (char *)malloc(t_size);

	if (arr == 0)
		return (NULL);

	mem = arr;

	for (i = 0; i < t_size; i++)
		mem[i] = 0;

	return (arr);
}
