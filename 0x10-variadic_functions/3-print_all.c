#include "variadic_functions.h"

/**
 * print_all - prints all arguments based on format
 * @format: type of argument
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int fg;
	const char *f = format;
	char *sh;

	va_start(args, format);
	while (*f != '\0')
	{
		switch (*f)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				fg = 0;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				fg = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				fg = 0;
				break;
			case 's':
				sh = va_arg(args, char *);
				if (!sh)
					printf("(nil)");
				else
				{
					printf("%s", sh);
					fg = 0;
				}
				break;
			default:
				fg = 1;
				break;
		}
		if (*(f + 1) != '\0' && fg == 0)
			printf(", ");
		f++;
	}
	va_end(args);
	printf("\n");
}
