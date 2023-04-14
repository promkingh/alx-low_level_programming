#include "main.h"

/**
 * array_range - creates an array
 * @min: min range for the array
 * @max: maximum range for the array
 * Return: pointer to the created array or NULL
 */

int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		arr[i] = i;

	return (arr);
}
