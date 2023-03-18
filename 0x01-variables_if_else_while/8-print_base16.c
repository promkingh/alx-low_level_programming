#include <stdio.h>

/**
 * main - Print single digit numbers of base ten using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hex;

	for (hex = 0; hex < 10; hex++)
	{
		putchar('0' + hex);
	}
	for (hex = 'a'; hex < 'g'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
