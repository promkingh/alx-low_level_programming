#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all it's parameters
 * @n: number of integers to sum
 * @...: variable number of arguments to sum
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int k, sum = 0;
	va_list args;

	va_start(args, n);
	for (k = 0; k < n; k++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
