#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separates the strings
 * @n: number of strings to print
 *
 * Reurn: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	char *s;
	va_list args;

	va_start(args, n);
	for (k = 0; k < n; k++)
	{
		s = va_arg(args, char *);
		if (!s)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && k < (n - 1))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
