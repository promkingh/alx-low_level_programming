#include <stdio.h>

/**
 * main - Print the sum of the multiples of 3 and 5
 *
 * Return: 0 Sucess
 */

int main(void)
{
	int d, sum;

	sum = 0;

	for (d = 1; d < 1024; d++)
	{
		if (d % 3 == 0 || d % 5 == 0)
			sum += d;
	}
	printf("%d\n", sum);
	return (0);
}
