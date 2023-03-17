#include <stdio.h>

/**
 * main - print lowercase alphabets in reverse order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
