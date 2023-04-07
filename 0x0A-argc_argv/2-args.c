#include <stdio.h>

/**
 * main - Print the name of the file
 * @argc: counts the num of statments
 * @argv: array of pointers to string/statements
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
