#include "3-calc.h"

/**
 * main - print the result of given arguments
 * @argc: argument count
 * @argv: pointer to array of pointers
 *
 * Return: 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *s;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	s = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(s) == NULL || s[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*s == '/' || *s == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(s)(a, b));
	return (0);
}
