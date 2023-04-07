#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the multiplication of arguments
 * @argc: Argument count
 * @argv: Array of pointers
 * Return: 0 (Sucess) or 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i, prod = 1;
	char *p;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			prod *= strtol(argv[i],&p, 10);
		}
		printf("%d\n", prod);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
