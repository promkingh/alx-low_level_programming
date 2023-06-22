#include "variadic_functions.h"

/**
 * print_char - print a character
 * @c: character
 *
 * Return: void
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_str - print a string
 * @s: string
 *
 * Return: void
 */
void print_str(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_int - print an integer
 * @i: integer
 *
 * Return: void
 */
void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_flt - print a float
 * @f: float
 *
 * Return: void
 */
void print_flt(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - print all
 * @format: list of argument types passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int k, l;
	prt all[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"f", print_flt},
		{NULL, NULL}
	};
	va_list args;
	char *separator = "";

	va_start(args, format);
	k = 0;
	while (format && format[k])
	{
		l = 0;
		while (all[l].c)
		{
			if (*(all[l].c) == format[k])
			{
				printf("%s", separator);
				all[l].f(args);
				separator = ", ";
				break;
			}
			l++;
		}
		k++;
	}
	va_end(args);
	printf("\n");
}
