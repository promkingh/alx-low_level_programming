#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - aloocates memory using malloc
 * @b: number of bytes to allocate
 * Return: pointer to allocated memory or exits with value 98 on NULL
 */

void *malloc_checked(unsigned int b)
{
	int *mal;

	mal = malloc(b);

	if (mal == NULL)
		exit(98);
	return (mal);
}
