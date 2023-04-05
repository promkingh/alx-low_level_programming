#include "main.h"

/**
 * print_diagsums - print the sum of diagonals of a square matrix
 * @a: array
 * @size: size of the square matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int m, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (m = 0; m < size; m++)
	{
		sum1 += a[m * size + m];
		sum2 += a[m * size + (size - m - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
