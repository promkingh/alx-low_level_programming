#include "function_pointers.h"

/**
 * int_index - checks the index
 * @array: pointer to given array
 * @size: size of the array
 * @cmp: funtion pointer
 *
 * Return: index or -1 for fail
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]) != 0)
			return (k);
	}

	return (-1);
}
