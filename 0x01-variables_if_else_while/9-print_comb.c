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
	while (sd < 9)
	{
		putchar('0' + sd);
		putchar(',');
		putchar(' ');
		sd++;
	}
	putchar('9');
	return (0);
}
