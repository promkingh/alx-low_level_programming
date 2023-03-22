#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print nunmbers fron n - 98
 * @num,@a,@b,@nn: variables
 *
 * Return: Void
 */
void print_to_98(int n)
{
	/* Declared the variables to be used*/
	int num;

	/* First If condition*/
	if (n >= 98 ) /* For +ve values less than 98*/
	{
		for (num = n; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else
	{
		for (num = n; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	printf("\n");
}
