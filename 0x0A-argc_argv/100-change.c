#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money
 * @argc: Argument count
 * @argv: Array of pointers
 * Return: 0 (Success) or 1 (Error)
 */

int main(int argc, char *argv[])
{
	int coins, change;
	
	int cents[] = {25, 10, 5, 2, 1};
	coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);
	while (change > 0)
	{
		if (change >= cents[0])
			change -= cents[0];
		else if (change >= cents[1])
			change -= cents[1];
		else if (change >= cents[2])
			change -= cents[2];
		else if (change >= cents[3])
			change -= cents[3];
		else if (change >= cents[4])
			change -= cents[4];
		coins++;
	}
	printf("%d\n", coins);
	
	return (0);
}
