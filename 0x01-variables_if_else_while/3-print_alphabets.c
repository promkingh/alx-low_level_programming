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
	char uc, lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	for (uc = 'A'; uc <= 'Z'; uc++)
	{
		putchar(uc);
	}
	putchar('\n');
	return (0);
}
