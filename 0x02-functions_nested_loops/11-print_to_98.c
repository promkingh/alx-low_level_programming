#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print nunmbers fron n - 98
 * @n: int variables
 *
 * Return: Void
 */
void print_to_98(int n)
{
	/* Declared the variables to be used*/
	int num;

	/* First If condition*/
	if (n >= 98)
	{
		for (num = n; num >= 98; num--)
		{
			printf("%d", umn);
			if (num != 98)
				printf(", ");
		}
	}
	else
	{
		for (num = n; num <= 98; num++)
		{
			printf("%d", num);
			if (num != 98)
				printf(", ");
		}
	}
	printf("\n");
}
