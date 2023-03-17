#include <stdio.h>

/**
 * main - print single digit numbers in base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sd;

	for (sd = 0; sd < 10; sd++)
	{
		printf("%d", sd);
	}
	putchar('\n');
	return (0);
}
