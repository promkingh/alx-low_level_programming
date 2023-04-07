#include <stdio.h>

/**
 * main - Print the number of argument passed ito the function
 * @argc: Argument count
 * @argv: Array of pointers
 * Return: 0 (Sucess)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
