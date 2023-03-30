#include "main.h"

/**
 * reverse_array - Print an array in reverse
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i, *aa, t;

	aa = a + n - 1;

	for (i = 0; i < n / 2; i++)
	{
		t = *(a + i);
		*(a + i) = *(aa - i);
		*(aa - i) = t;
	}
}
