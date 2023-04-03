#include <stdio.h>
#include "main.h"

/**
 * _isPrintableASCII - Determines if n is a printable ASCII character
 * @n: input integer
 * Return: 0 or 1.
 */

int _isPrintableASCII(int n)
{
	return(n >= 32 && n <= 126);
}

/**
 * print_hexes - Print Hexadecimal values for string b
 * @b: input string
 * @start: Starting position
 * @: Ending position 
 */

void print_hexes(char *b, int start, int end)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf(" ");

		if (i % 2)
			printf(" ");
	}
}

/**
 * print_ASCII - print ascii values for string b
 * @b: input string
 * @start: Starting position
 * @: Ending position
 */

void print_ASCII(char *b, int start, int end)
{
	int i, cht;
	for (i = 0; i < end; i++)
	{
		cht = *(b + i + start);
		if (!_isPrintableASCII(cht))
			cht = 46;
		printf("%c", cht);
	}
}

/**
 * print_buffer - Print a buffer string b
 * @size: size of the buffer
 * @b: input string
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size <= 0)
		printf("\n");
	else if (size > 0)
	{
		for(start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x:", start);
			print_hexes(b, start, end);
			print_ASCII(b, start, end);
			printf("\n");
		}
	}
}
