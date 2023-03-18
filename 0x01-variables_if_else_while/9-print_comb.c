#include <stdio.h>

/**
 * main - print all posible combinations of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sd;

	sd = 0;
	while (sd < 10)
	{
		putchar('0' + sd);
		if (sd < 9)
		{
			putchar(',');
			putchar(' ');
		}
		sd++;
	}
	putchar('\n');
	return (0);
}
