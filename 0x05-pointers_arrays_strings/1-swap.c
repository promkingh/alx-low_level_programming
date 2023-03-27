#include "main.h"

/**
 * swap_int - Swap the values of two integers
 * @a: First input integer
 * @b: second input integer
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *b;
	*b = *a;
	*a = m;
}
