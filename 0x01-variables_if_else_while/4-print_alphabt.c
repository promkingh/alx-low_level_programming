#include <stdio.h>

/**
 * main - Printing the alphabets in upper and lower case
 *
 * using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc == 'e' || lc == 'q')
		{
			continue;
		}
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
