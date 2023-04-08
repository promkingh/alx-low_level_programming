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
	int i, e, sum = 0;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			e = atoi(argv[i]);
			if (e == 0 && argv[i][0] != '0')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += e;
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
