#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string
 * @n: number of integers to print
 *
 * Return Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
