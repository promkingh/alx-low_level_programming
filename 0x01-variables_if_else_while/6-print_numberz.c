#include <stdio.h>

/**
 * main - Print single digit numbers of base ten using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sd;

	for (sd = 0; sd < 10; sd++)
	{
		putchar('0' + sd);
	}
	putchar('\n');
	return (0);
}
