#include <stdio.h>
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
	char *p;

	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			e = strtol(argv[i], &p, 10);
			if (*p)
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
