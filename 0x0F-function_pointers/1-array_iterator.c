#include "function_pointers.h"

/**
 * array_iterator - checks through an array and prints it
 *			through a pointer function
 * @array: given array pointer
 * @size: size of the array
 * @action: pointer to the funtion
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t k;

	if (array != NULL && action != NULL)
	{
		for (k = 0; k < size; k++)
			action(array[k]);
	}
}
