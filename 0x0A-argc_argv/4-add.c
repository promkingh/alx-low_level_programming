#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: Argument count
 * @argv: Array of pointers
 * Return: 0 (Sucess) or 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (isdigit(argv))
	{
		for (i = 0; i < argc; i++)
		{
			if (isdigit(argv[i]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
