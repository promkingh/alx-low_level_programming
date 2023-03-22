#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: input number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int ld;

	if (n >= 0)
	{
		ld = _putchar((n % 10) + '0');
		return (ld);
	}
	else
	{
		ld = _putchar((-n % 10) + '0');
		return (ld - '0');
	}
}
